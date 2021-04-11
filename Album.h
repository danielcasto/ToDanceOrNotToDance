//
// Created by danie on 4/6/2021.
//

#pragma once

#include "Song.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

class Album {
    string name;
    string artist;
    vector<Song> songs;
    float avgDanceability;
    bool containsExplicitSong;
    string artistID;
    int totalRuntime;

public:
    Album(string _name, string _artist, vector<Song> _songs, float _avgDanceability, bool _containsExplicitSong, string _artistID, int _totalRuntime);
    bool operator>(const Album& rhs) const;
    bool operator<(const Album& rhs) const;
};
