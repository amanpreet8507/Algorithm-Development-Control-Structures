//
//  main.cpp
//  Printing the Decimal Equivalent of a Binary Number
//
//  Created by Amanpreeet Sandhu on 2025-01-03.
//

#include <iostream>

using namespace std;

int main() {
    // Intialize variables
    unsigned int binaryNumber;
    unsigned int decimalNumber = 0;
    unsigned  int positionalValue = 1;
    
    // Receive the user input
    cout << "Input the binary number: " ;
    cin >> binaryNumber;
    
    while (binaryNumber > 0){
        int lastDigit = binaryNumber % 10;
        decimalNumber += lastDigit * positionalValue;
        positionalValue *= 2;
        binaryNumber/=10;
    }
    cout << " " << decimalNumber << endl;
    return 0;
    
    // Use the % and / to pick off the binary digits one at a time from right to left
//    unsigned int firstDigit = binary/10000 * 16;
//    unsigned int secondDigit = ((binary/1000) % 10 )* 8;
//    unsigned int thirdDigit = ((binary/100) % 10 )* 4;
//    unsigned int fourthDigit = ((binary/10) % 10 )* 2;
//    unsigned int fifthDigit = (binary%10) * 1;
//    
//    unsigned int decEqu = firstDigit + secondDigit + thirdDigit + fourthDigit + fifthDigit;
//    cout << firstDigit << " ";
//    cout << secondDigit << " ";
//    cout << thirdDigit << " ";
//    cout << fourthDigit << " " ;
//    cout << fifthDigit << " ";
    
//    cout << decEqu;
}
