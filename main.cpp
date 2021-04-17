#include <iostream>
#include "Album.h"
#include "main_functions.h"
#include <chrono>
#include <bits/stdc++.h>

using namespace std;
using namespace std::chrono;

int main() {
    vector<Album> allAlbums;
    vector<Album> selectedAlbums;
    int input = -1;
    int low=0;
    bool leastToGreatest;
    bool canContainExplicit;
    bool particularArtist;
    string artist;
    int maxNumOfTracks;
    int maxNumOfResults;
    clock_t start, end, qsStart, qsEnd;

    cout << endl;
    cout << "------------------------------------------------" << endl;
    cout << "|     Welcome to, TO DANCE OR NOT TO DANCE     |" << endl;
    cout << "------------------------------------------------" << endl;

    cout << "Loading..." << endl << endl;

    loadAlbums(allAlbums);

    //TODO write try and catch blocks to catch invalid input

    while(input < 0 || input > 3) {
        cout << "How would you like the albums ranked on Danceability: " << endl;\
        cout << "0. Exit " << endl;
        cout << "1. Least -> Most " << endl;
        cout << "2. Most -> Least " << endl;
//        cout << "3. Qucik Sort" << endl;

        cin >> input;

        if (input == 0)
            return 0;
        else if (input == 1)
        {
        leastToGreatest = true;
        start = clock();
        heapSortMin(allAlbums, allAlbums.size());
        end = clock();

        qsStart = clock();
        quickSort(allAlbums, low, allAlbums.size() - 1);
        qsEnd = clock();
        }
        else if (input == 2)
        {
            leastToGreatest = false;
            heapSortMax(allAlbums, allAlbums.size());
        }
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

        if(canContainExplicit) {
            if(!album.hasExplicitSong())
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

    int counter = 1;
    string type;

    cout << "------------------------------------------------" << endl;
    cout << "|                ALgo Comparison               |" << endl;
    cout << "------------------------------------------------" << endl;

    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Time taken for Heapsort was : " << fixed
         << time_taken << setprecision(3);
    cout << " sec " << endl;

    double time_takenQS = double(qsEnd - qsStart) / double(CLOCKS_PER_SEC);
    cout << "Time taken for QuickSort was : " << fixed
         << time_takenQS << setprecision(3);
    cout << " sec " << endl;

    cout << "------------------------------------------------" << endl;

    cout << "------------------------------------------------" << endl;
    cout << "|             Album Recommendations            |" << endl;
    cout << "------------------------------------------------" << endl;

    if (maxNumOfResults = -1){
        maxNumOfResults = selectedAlbums.size();
    }

    for (int i = 0; i < maxNumOfResults; i++) {
        if (selectedAlbums[i].hasExplicitSong() == 1){
            type = "Yes";
        } else {
            type = "No";
        }

        if (particularArtist) {
            cout << counter << ") " << endl;
            cout << "Album Name: " << selectedAlbums[i].getName() << endl;
            cout << "Album Artist: " << selectedAlbums[i].getArtist() << endl;
            cout << "Explicit: " << type << endl;
            cout << "# Songs: " << selectedAlbums[i].getSongs().size() << endl;
            cout << "Danceibility Rating: " << selectedAlbums[i].getAvgDanceability() << endl;
        } else {
            cout << counter << ") " << endl;
            cout << "Album Name: " << selectedAlbums[i].getName() << endl;
            cout << "Explicit: " << type << endl;
            cout << "# Songs: " << selectedAlbums[i].getSongs().size() << endl;
            cout << "Danceibility Rating: " << selectedAlbums[i].getAvgDanceability() << endl;
        };
        cout << "\n";
        counter++;
    }
    cout << "------------------------------------------------" << endl;
    cout << "|       Finished Generating Albums, Enjoy!      |" << endl;
    cout << "------------------------------------------------" << endl;

    return 0;
}
