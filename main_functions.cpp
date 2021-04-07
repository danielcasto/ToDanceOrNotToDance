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
        std::getline(fileStream, line);
        stringstream lineStream(line);
        string temp;

        while(lineStream >> temp)
            std::cout << temp;
    } else
        throw std::runtime_error("File did not open.");

    fileStream.close();
}
