#include "Rectangle.h"
#include "Pet.h"
#include "Music.h"
using namespace std;

int main() {
    // Rectangle
    Rectangle rect1(4, 6);
    cout << "Rectangle 1: " << endl;
    cout << "Area: " << rect1.getArea() << endl;
    cout << "Perimeter: " << rect1.getPerimeter() << endl;
    cout << "Is Square? " << boolalpha << rect1.isSquare() << endl;
    printf("====================================================\n");

    // Pet
    Pet myPet("Lucky", 5, "dog");
    cout << "My pet's name is " << myPet.getName() << endl;

    Puppy myPuppy("Kong", 3, "dog", "Poodle");
    cout << "My puppy's breed is " << myPuppy.getBreed() << endl;
    printf("====================================================\n");

    // Music Service
    MusicStreamingService myService("Melon");

    myService.addMusic("Jump", "Blackpink", "Jump", 2025);
    myService.addMusic("Swim", "BTS", "ARIRANG", 2026);
    myService.addMusic("BANG BANG", "IVE", "REVIVE", 2026);
    myService.addMusic("404", "KiiiKiii", "Delulu", 2026);

    // 제목 검색
    string music_title;
    cout << "Enter the music Title: ";
    cin >> music_title;

    Music* result = myService.searchByTitle(music_title);
    if (result != NULL) {
        cout << "Found: " << result->getTitle() << endl;
    }
    else {
        cout << "Not Found" << endl;
    }

    // 아티스트 검색
    string artist_name;
    cout << "Enter the artist name: ";
    cin >> artist_name;

    vector<Music*> artistResult = myService.searchByArtist(artist_name);
    if (artistResult.size() > 0) {
        cout << "Found " << artistResult.size() << " songs by " << artist_name << " : " << endl;
        for (int i = 0; i < artistResult.size(); i++) {
            cout << artistResult[i]->getTitle() << endl;
        }
    }
    else {
        cout << "Not Found" << endl;
    }

    return 0;
}