//
// Created by danie on 4/6/2021.
//

#include "Song.h"

Song::Song(string _songID, string _name, int _trackNumber, bool _isExplicit, float _danceability, int _duration) {
    name = _name;
    isExplicit = _isExplicit;
    danceability = _danceability;
    duration = _duration;
    trackNumber = _trackNumber;
    songID = _songID;
}

string Song::getName() const {
    return name;
}

bool Song::getExplicitness() const {
    return isExplicit;
}

float Song::getDanceability() const {
    return danceability;
}

int Song::getDuration() const {
    return duration;
}

string Song::getSongID() const {
    return songID;
}
