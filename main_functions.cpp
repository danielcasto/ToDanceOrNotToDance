#include "main_functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdexcept>

using namespace std;

using std::ifstream;
using std::stringstream;
using std::string;

void loadAlbums(vector<Album> &albums) {
    ifstream fileStream;
    fileStream.open("../Files/tracks_features.csv");

    if(fileStream.is_open()) {
        string line;
        std::getline(fileStream, line);
        stringstream lineStream(line);
        string temp;

        while(lineStream >> temp)
            std::cout << temp;
    } else
        throw std::runtime_error("File did not open.");

    fileStream.close();
}

void heapify_down(vector<Album>& list, int size, int root) {

    //https://www.geeksforgeeks.org/heap-sort/

    int largest = root;
    int left = 2 * root + 1; // left
    int right = 2 * root + 2; // right

    //left check
    if (left < size && list[left] > list[largest])
        largest = left;

    // right check
    if (right < size && list[right] > list[largest])
        largest = right;

    // If largest is not root
    if (largest != root) {
        swap(list[root], list[largest]);

        // Recurse
        heapify_down(list, size, largest);
    }
}

void heapSort(vector<Album> list, int size) {
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify_down(list, size, i);

    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
        swap(list[0], list[i]);

        // Heapify root element to get highest element at root again
        heapify_down(list, i, 0);
    }
}