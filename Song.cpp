//
// Created by danie on 4/6/2021.
//

#include "Song.h"

Song::Song(string _name, bool _isExplicit, float _danceability, int _duration, int _trackNumber, string _songID) {
    name = _name;
    isExplicit = _isExplicit;
    danceability = _danceability;
    duration = _duration;
    trackNumber = _trackNumber;
    songID = _songID;
}