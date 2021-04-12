#pragma once

#include <vector>
#include "Album.h"

using std::vector;

void loadAlbums(vector<Album> &albums);

void heapify_down(vector<int>& arr, int size, int root);