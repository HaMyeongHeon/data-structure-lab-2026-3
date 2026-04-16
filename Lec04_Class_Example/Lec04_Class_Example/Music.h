#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Music {
private:
    string title;
    string artist;
    string album;
    int year;

public:
    Music(string t, string ar, string al, int y) {
        title = t;
        artist = ar;
        album = al;
        year = y;
    }

    string getTitle() {
        return title;
    }

    string getArtist() {
        return artist;
    }

    string getAlbum() {
        return album;
    }

    int getYear() {
        return year;
    }
};

class MusicStreamingService {
private:
    string serviceName;
    vector<Music> musicList;

public:
    MusicStreamingService(string name) {
        this->serviceName = name;
    }

    void addMusic(string title, string artist, string album, int year) {
        Music list(title, artist, album, year);
        musicList.push_back(list);
        cout << list.getTitle() << " by " << artist << " added to " << serviceName << endl;
    }

    Music* searchByTitle(string title) {
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getTitle() == title) {
                return &musicList[i];
            }
        }
        return NULL;
    }

    vector<Music*> searchByArtist(string artist) {
        vector<Music*> result;
        for (int i = 0; i < musicList.size(); i++) {
            if (musicList[i].getArtist() == artist) {
                result.push_back(&musicList[i]);
            }
        }
        return result;
    }
};
