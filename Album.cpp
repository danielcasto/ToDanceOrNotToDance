//
// Created by danie on 4/6/2021.
//

#include "Album.h"

Album::Album(string _name, string _artist, vector<Song> _songs, float _avgDanceability, bool _containsExplicitSong, string _artistID) {
    name = _name;
    artist = _artist;
    songs = _songs;
    avgDanceability = _avgDanceability;
    containsExplicitSong = _containsExplicitSong;
    artistID = _artistID;
}