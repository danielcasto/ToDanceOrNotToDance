//
// Created by danie on 4/6/2021.
//

#pragma once

#include <string>

class Song {
    string name;
    bool isExplicit;
    float danceability;
    //note that duration is measured in milliseconds
    int duration;
    //trackNumber may not be necessary
    int trackNumber;
    //spotify song ID
    string songID;

public:
    Song(string _name, bool _isExplicit, float _danceability, int _duration, int _trackNumber, string _songID);
};