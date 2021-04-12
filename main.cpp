#include <iostream>
#include "Album.h"
#include "main_functions.h"

using namespace std;

int main() {
    vector<Album> albums;

    loadAlbums(albums);

    cout << "Welcome to Dance for Not to Dance! " << endl;
    cout << "-----------------------------------" << endl;
    cout << "How would you like the albums ranked on Danceability: " << endl;\
    cout << "0. Exit " << endl;
    cout << "1. Least -> Most " << endl;
    cout << "2. Most -> Least " << endl;
    cout << endl;
    cout << "// Next menu after input " << endl;
    cout << endl;
    cout << "Would you like Albums contain explict songs? " << endl;
    cout << "0. Exit " << endl;
    cout << "1. Yes " << endl;
    cout << "2. No " << endl;
    cout << endl;
    cout << "// Next menu after input " << endl;
    cout << endl;
    cout << "Any particular Artist? " << endl;
    cout << "0. Exit " << endl;
    cout << "1. Yes " << endl;
    cout << "2. No " << endl;
    cout << endl;
    cout << "// Next menu after input, if they said yes to question above " << endl;
    cout << endl;
    cout << "Enter name of artist: " << endl;
    cout << endl;
    cout << "// Next menu after input, if they said yes to question above or if the said no " << endl;
    cout << endl;
    cout << "MAX number of tracks per Album (-1 for no max): " << endl;
    cout << endl;
    cout << "// Next menu after input " << endl;
    cout << endl;
    cout << "How many album results would you like to see? ( -1 for all results) " << endl;

    return 0;
}