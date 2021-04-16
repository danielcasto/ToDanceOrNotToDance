#include <iostream>
#include "Album.h"
#include "main_functions.h"

using namespace std;

int main() {
    vector<Album> allAlbums;
    vector<Album> selectedAlbums;
    int input = -1;
    bool leastToGreatest;
    bool canContainExplicit;
    bool particularArtist;
    string artist;
    int maxNumOfTracks;
    int maxNumOfResults;

    cout << endl;
    cout << "Welcome to, to Dance or Not to Dance! " << endl;
    cout << "-----------------------------------" << endl << endl;

    cout << "Loading..." << endl << endl;

    loadAlbums(allAlbums);

    //TODO write try and catch blocks to catch invalid input

    while(input < 0 || input > 2) {
        cout << "How would you like the albums ranked on Danceability: " << endl;\
        cout << "0. Exit " << endl;
        cout << "1. Least -> Most " << endl;
        cout << "2. Most -> Least " << endl;

        cin >> input;

        if (input == 0)
            return 0;
        else if (input == 1)
            leastToGreatest = true;
        else if (input == 2)
            leastToGreatest = false;
        else
            cout << "Invalid number!!!" << endl << endl;
    }

    input = -1;

    while(input < 0 || input > 2) {
        cout << endl;
        cout << "Would you like Albums contain explict songs? " << endl;
        cout << "0. Exit " << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;

        cin >> input;

        if (input == 0)
            return 0;
        else if (input == 1)
            canContainExplicit = true;
        else if (input == 2)
            canContainExplicit = false;
        else
            cout << "Invalid number!!!" << endl << endl;

    }

    input = -1;

    while(input < 0 || input > 2) {
        cout << endl;
        cout << "Any particular Artist? " << endl;
        cout << "0. Exit " << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;

        cin >> input;

        if (input == 0)
            return 0;
        else if (input == 1)
            particularArtist = true;
        else if (input == 2)
            particularArtist = false;
        else
            cout << "Invalid number!!!" << endl << endl;
    }

    if(particularArtist) {
        cout << endl;
        cout << "Enter name of artist: " << endl;
        cin.ignore();
        std::getline(cin, artist);
        artist = "['" + artist + "']";
    }


    cout << endl;
    cout << "MAX number of tracks per Album (-1 for no max): " << endl;
    cin >> maxNumOfTracks;


    cout << endl;
    cout << "How many album results would you like to see? ( -1 for all results) " << endl;
    cin >> maxNumOfResults;

    for(const auto& album : allAlbums) {
        bool meetsCriteria = true;

        if(!canContainExplicit) {
            if(album.hasExplicitSong())
                meetsCriteria = false;
        }

        if(particularArtist) {
            if(album.getArtist() != artist)
                meetsCriteria = false;
        }

        if(maxNumOfTracks != -1) {
            if (album.getSongs().size() > maxNumOfTracks)
                meetsCriteria = false;
        }

        if(meetsCriteria)
            selectedAlbums.push_back(album);
    }

    return 0;
}