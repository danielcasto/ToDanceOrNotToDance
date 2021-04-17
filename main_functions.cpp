#include "main_functions.h"
#include <iostream>
#include <iomanip>
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
        //This is for the first line which just contains column titles
        std::getline(fileStream, line);

        //album stuff
        vector<Song> albumSongs;
        string albumName;
        string artist;
        string artistID;
        float totalDanceability = 0;
        bool hasExplicitSongs = false;
        int totalRuntime = 0;
        //The purpose of this last variable is to know when a new album has started
        int trackNum = 1;

        //put each line into a string stream and iterate through that stream
        while(std::getline(fileStream, line)) {
            stringstream lineStream(line);
            string songID;
            string songName;
            string trackNumString;
            string isExplicitString;
            bool isExplicit = false;
            string danceabilityString;
            string durationString;
            string albumNameTemp;
            string artistTemp;
            string artistIDTemp;

            string dummyString;

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(songID);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    songID += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, songID, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(songName);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    songName += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, songName, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(albumNameTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    albumNameTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, albumNameTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(artistTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    artistTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, artistTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(artistIDTemp);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    artistIDTemp += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, artistIDTemp, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(trackNumString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    trackNumString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, trackNumString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(isExplicitString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    isExplicitString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, isExplicitString, ',');


            if(isExplicitString == "TRUE")
                isExplicit = true;

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(danceabilityString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    danceabilityString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, danceabilityString, ',');


            //dummy string section begins -------------------------:
            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');

            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(dummyString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    dummyString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, dummyString, ',');
            //dummy strings section end -------------------------


            if(lineStream.peek() == '\"') {
                lineStream >> std::quoted(durationString);
                while(lineStream.peek() != ',') {
                    lineStream >> std::quoted(dummyString);
                    durationString += dummyString;
                }
                std::getline(lineStream, dummyString, ',');
            } else
                std::getline(lineStream, durationString, ',');

            //create new song and possibly new album object
            if(trackNum != stoi(trackNumString)) {
                //if these two variables aren't the same then a new album has started

                Album currentAlbum(albumName, artist, albumSongs, ((float) totalDanceability)/albumSongs.size(), hasExplicitSongs, artistID, totalRuntime);
                albums.push_back(currentAlbum);

                //reset album variables
                trackNum = 2;
                albumName.clear();
                artist.clear();
                albumSongs.clear();
                totalDanceability = 0;
                hasExplicitSongs = false;
                artistID.clear();
                totalRuntime = 0;
            } else {
                trackNum++;
            }

            //This is here because it needs to be after a new album has started
            if(albumName.empty())
                albumName = albumNameTemp;

            if(artist.empty())
                artist = artistTemp;

            if(artistID.empty())
                artistID = artistIDTemp;

            if(isExplicit)
                hasExplicitSongs = true;

            totalDanceability += stof(danceabilityString);
            totalRuntime += stoi(durationString);

            //add new song to vector
            Song currentSong(songID, songName, stoi(trackNumString), isExplicit, stof(danceabilityString), stoi(durationString));
            albumSongs.push_back(currentSong);
        }
    } else
        throw std::runtime_error("File did not open.");

    fileStream.close();
}

void heapify_down(vector<Album>& list, int size, int index) {
    //heapifyDown for max heap

    //Citation: this is a variation of Daniel Casto's solution to stepik quiz 6
    if(index < size) {
        int largestChildIndex = 0;
        bool childInRange = true;

        if(2*index+2 < size && 2*index+1 < size) {
            largestChildIndex = 2*index+2;
            if(list[largestChildIndex] < list[2*index+1])
                largestChildIndex = 2*index+1;
        } else if(2*index+1 < size)
            largestChildIndex = 2*index+1;
        else
            childInRange = false;

        if(list[index] < list[largestChildIndex] && childInRange) {
            swap(list[index], list[largestChildIndex]);
            heapify_down(list, size, largestChildIndex);
        }
    }
}

void heapify_minHeap(vector<Album>& list, int size, int index) {
    //heapifyDown for min heap

    //Citation: this is a variation of Daniel Casto's solution to stepik quiz 6
    if(index < size) {
        int smallestChildIndex = 0;
        bool childInRange = true;

        if(2*index+2 < size && 2*index+1 < size) {
            smallestChildIndex = 2*index+2;
            if(list[smallestChildIndex] > list[2*index+1])
                smallestChildIndex = 2*index+1;
        } else if(2*index+1 < size)
            smallestChildIndex = 2*index+1;
        else
            childInRange = false;

        if(list[index] > list[smallestChildIndex] && childInRange) {
            swap(list[index], list[smallestChildIndex]);
            heapify_minHeap(list, size, smallestChildIndex);
        }
    }
}

void heapSortMin(vector<Album>& list, int size) {
    // Build min heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify_down(list, size, i);

    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
        swap(list[0], list[i]);

        // Heapify root element to get highest element at root again
        heapify_down(list, i, 0);
    }
}

void heapSortMax(vector<Album>& list, int size) {
    // Build max heap
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify_minHeap(list, size, i);

    // Heap sort
    for (int i = size - 1; i >= 0; i--) {
        swap(list[0], list[i]);

        // Heapify root element to get highest element at root again
        heapify_minHeap(list, i, 0);
    }
}

int partition(vector<Album>& list, int low, int high) {
	//Define pivot to first element
	float pivot = list[low].getAvgDanceability();
	int up = low, down = high;

	//move element smaller than pivot before it, and lager element after it
	while (up < down) {
		for (int i = up; i < high; i++) {
			if (list[up].getAvgDanceability() > pivot)
				break;
			up++;
		}
		for (int j = high; j > low; j--) {
			if (list[down].getAvgDanceability() < pivot)
				break;
			down--;
		}
		if (up < down)
			swap(list[up], list[down]);
	}
	swap(list[low], list[down]);
	return down;
}

void quickSort(vector<Album>& list, int low, int high) {
	if (low < high) {
		//define new pivot for new part
		int pivot = partition(list, low, high);
		//sort part befor pivot
		quickSort(list, low, pivot - 1);
		//sort part after pivot
		quickSort(list, pivot + 1, high);
	}
}
