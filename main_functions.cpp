#include "main_functions.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

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

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(songID);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    songID += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, songID, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(songName);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    songName += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, songName, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(albumNameTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    albumNameTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, albumNameTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(artistTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    artistTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, artistTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(artistIDTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    artistIDTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, artistIDTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(trackNumString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    trackNumString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, trackNumString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(isExplicitString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    isExplicitString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, isExplicitString, ',');


            if(isExplicitString == "TRUE")
                isExplicit = true;

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(danceabilityString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    danceabilityString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, danceabilityString, ',');


            //dummy string section begins -------------------------:
            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');
            //dummy strings section end -------------------------


            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(durationString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    durationString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
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

void heapify_down(vector<Album>& list, int size, int root) {

    //https://www.geeksforgeeks.org/heap-sort/

    int largest = root;
    int left = 2 * root + 1; // left
    int right = 2 * root + 2; // right

    //left check
    if (left < size && list[left] > list[largest])
        largest = left;

    // right check
    if (right < size && list[right] > list[largest])
        largest = right;

    // If largest is not root
    if (largest != root) {
        swap(list[root], list[largest]);

        // Recurse
        heapify_down(list, size, largest);
    }
}

void heapSort(vector<Album> list, int size) {
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify_down(list, size, i);

    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
        swap(list[0], list[i]);

        // Heapify root element to get highest element at root again
        heapify_down(list, i, 0);
    }
}