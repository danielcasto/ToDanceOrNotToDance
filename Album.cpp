//
// Created by danie on 4/6/2021.
//

#include "Album.h"

Album::Album(string _name, string _artist, vector<Song> _songs, float _avgDanceability, bool _containsExplicitSong, string _artistID, int _totalRuntime) {
    name = _name;
    artist = _artist;
    songs = _songs;
    avgDanceability = _avgDanceability;
    containsExplicitSong = _containsExplicitSong;
    artistID = _artistID;
    totalRuntime = _totalRuntime;
}

bool Album::operator>(const Album& rhs) const {
    return this->avgDanceability > rhs.avgDanceability;
}

bool Album::operator<(const Album& rhs) const {
    return this->avgDanceability < rhs.avgDanceability;
}