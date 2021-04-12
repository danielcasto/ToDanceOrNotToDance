#include "main_functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>

using std::ifstream;
using std::stringstream;
using std::string;

void loadAlbums(vector<Album> &albums) {
    ifstream fileStream;
    fileStream.open("../Files/tracks_features.csv");

    if(fileStream.is_open()) {
        string line;
        //This is for the first line which just contains column titles
        std::getline(fileStream, line);

        //album stuff
        vector<Song> albumSongs;
        string albumName;
        string artist;
        string artistID;
        float totalDanceability = 0;
        bool hasExplicitSongs = false;
        int totalRuntime = 0;
        //The purpose of this last variable is to know when a new album has started
        int trackNum = 1;

        //put each line into a string stream and iterate through that stream
        while(std::getline(fileStream, line)) {
            stringstream lineStream(line);
            string songID;
            string songName;
            string trackNumString;
            string isExplicitString;
            bool isExplicit = false;
            string danceabilityString;
            string durationString;
            string albumNameTemp;
            string artistTemp;
            string artistIDTemp;

            string dummyString;

            std::getline(lineStream, songID, ',');

            // Start of problem area
            std::getline(lineStream, songName, ',');
            std::getline(lineStream, albumNameTemp, ',');

            std::getline(lineStream, dummyString, ',');

            std::getline(lineStream, artistTemp, ',');

            std::getline(lineStream, artistIDTemp, ',');
            //end of problem area

            std::getline(lineStream, trackNumString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, isExplicitString, ',');

            if(isExplicitString == "TRUE")
                isExplicit = true;

            std::getline(lineStream, danceabilityString, ',');

            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');
            std::getline(lineStream, dummyString, ',');

            std::getline(lineStream, durationString, ',');

            //create new song and possibly new album object
            if(trackNum != stoi(trackNumString)) {
                //if these two variables aren't the same then a new album has started

                Album currentAlbum(albumName, artist, albumSongs, ((float) totalDanceability)/albumSongs.size(), hasExplicitSongs, artistID, totalRuntime);
                albums.push_back(currentAlbum);

                //reset album variables
                trackNum = 2;
                albumName.clear();
                artist.clear();
                albumSongs.clear();
                totalDanceability = 0;
                hasExplicitSongs = false;
                artistID.clear();
                totalRuntime = 0;
            } else {
                trackNum++;
            }

            //This is here because it needs to be after a new album has started
            if(albumName.empty())
                albumName = albumNameTemp;

            if(artist.empty())
                artist = artistTemp;

            if(artistID.empty())
                artistID = artistIDTemp;

            if(isExplicit)
                hasExplicitSongs = true;

            totalDanceability += stof(danceabilityString);
            totalRuntime += stoi(durationString);

            //add new song to vector
            Song currentSong(songID, songName, stoi(trackNumString), isExplicit, stof(danceabilityString), stoi(durationString));
            albumSongs.push_back(currentSong);
        }
    } else
        throw std::runtime_error("File did not open.");

    fileStream.close();
}
