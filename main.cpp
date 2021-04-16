#include <iostream>
#include "Album.h"
#include "main_functions.h"

using namespace std;

int main() {
    vector<Album> albums;
    vector<Album> copy;
    int input = 0;
    string temp;
    bool leastToGreatest;
    bool canContainExplicit;
    bool particularArtist;
    string artist;
    int maxNumOfTracks;
    int maxNumOfResults;

    loadAlbums(albums);

    //TODO write try and catch blocks to catch invalid input

    while(input >= 0 && input <= 2) {
        cout << "Welcome to Dance for Not to Dance! " << endl;
        cout << "-----------------------------------" << endl;
        cout << "How would you like the albums ranked on Danceability: " << endl;\
        cout << "0. Exit " << endl;
        cout << "1. Least -> Most " << endl;
        cout << "2. Most -> Least " << endl;

        cin >> temp;
        input = stoi(temp);
        //TODO put this for the rest of the inputs

        if (input == 0)
            return 0;
        else if (input == 1)
            leastToGreatest = true;
        else if (input == 2)
            leastToGreatest = false;
        else
            cout << "Invalid number!!!" << endl << endl;
    }

    while(input >= 0 && input <= 2) {
        cout << endl;
        cout << "// Next menu after input " << endl;
        cout << endl;
        cout << "Would you like Albums contain explict songs? " << endl;
        cout << "0. Exit " << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;

        if (input == 0)
            return 0;
        else if (input == 1)
            canContainExplicit = true;
        else if (input == 2)
            canContainExplicit = false;
        else
            cout << "Invalid number!!!" << endl << endl;

    }

    while(input >= 0 && input <= 2) {
        cout << endl;
        cout << "// Next menu after input " << endl;
        cout << endl;
        cout << "Any particular Artist? " << endl;
        cout << "0. Exit " << endl;
        cout << "1. Yes " << endl;
        cout << "2. No " << endl;

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
        cout << "// Next menu after input, if they said yes to question above " << endl;
        cout << endl;
        cout << "Enter name of artist: " << endl;

        std::getline(cin, artist);
    }

    cout << endl;
    cout << "// Next menu after input" << endl;
    cout << endl;
    cout << "MAX number of tracks per Album (-1 for no max): " << endl;

    cin >> maxNumOfTracks;

    cout << endl;
    cout << "// Next menu after input " << endl;
    cout << endl;
    cout << "How many album results would you like to see? ( -1 for all results) " << endl;
    cin >> maxNumOfResults;

    return 0;
}