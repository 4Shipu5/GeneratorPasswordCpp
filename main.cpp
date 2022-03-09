// By This Code Shipu
// import library  { Random And time And iostream }
#include <iostream>
#include <time.h> // Time
#include <random> // Random

// My File
#include "Debug.hpp"

using namespace std;

int main() {
    string password;

    /*     Characters & Numbers & Symbols      */
    /* You Can Add More */
    string low =  "abcdefghijklmnopqrstuvwxyz"; // Lower
    string high = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // Upper
    string numbers = "1234567890"; // Numbers
    string symbols = "£$%&@"; // Symbols
    
    string MyCharacters = "";
    
    string all = low  + high + numbers + symbols + MyCharacters; // Here Add All This /\.
    
    // PrintLength(all); /* Debug Length Characters */
    
    /*             Input User            */
    cout << "How Much Length Password : ";
    int len; // Length Password
    cin >> len; // Typing Length
    
    /*                 Work Time                   */
    srand((unsigned)time(NULL));
    int number;
    int i = 0;

    while (i < len) {
        number = (rand() % all.length()); // < Random Number
        password += all.at(number); // Result Number & Add Character
        i++; // Add & Again
    }
    
    
    /* Result */
    cout << "the Password is : " << password << endl; // Result Password
    system("pause"); // < This Pause in Console
    
    return 0;
}
