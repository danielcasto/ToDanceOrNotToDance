//
// Created by danie on 4/6/2021.
//

#pragma once

#include <string>

using std::string;

class Song {
    string name;
    bool isExplicit;
    float danceability;
    //note that duration is measured in milliseconds
    int duration;
    int trackNumber;
    //spotify song ID
    string songID;

public:
    Song(string _songID, string _name, int _trackNumber, bool _isExplicit, float _danceability, int _duration);
    string getName() const;
    bool getExplicitness() const;
    float getDanceability() const;
    int getDuration() const;
    string getSongID() const;
};