//
//  main.cpp
//  Checkerboard Pattern of Asterisks
//
//  Created by Amanpreeet Sandhu on 2025-01-05.
//

#include <iostream>
using namespace std;

int main() {
    // Intialize variables
    // Make rows
    // Make columns
    unsigned int row{0};
    while (row < 8){
        unsigned int column{0};
        while(column < 7) {
            if(row % 2 == 0){
                cout << "* ";
            } else{
                cout << " *";
            }
            ++column;
        }
        cout << endl;
        ++row;
    }
    return 0;
}
