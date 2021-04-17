#pragma once

#include <vector>
#include "Album.h"

using std::vector;

void loadAlbums(vector<Album> &albums);

void heapify_down(vector<Album>& list, int size, int root);
void heapify_minHeap(vector<Album>& list, int size, int index);
void heapSortMax(vector<Album>& list, int size);
void heapSortMin(vector<Album>& list, int size);

int partition(vector<Album>& list, int low, int high);
void quickSort(vector<Album>& list, int low, int high);
