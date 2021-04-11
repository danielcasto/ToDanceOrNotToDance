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