//Users/amanpreeetsandhu/Desktop/C++ Projects/Palindromes/Palindromes.xcodeproj//
//  Palindromes.cpp
//  Palindromes
//
//  Created by Amanpreeet Sandhu on 2024-12-05.
//
#include <iostream>
#include "Palindromes.h"

using namespace std;

int main(){
    
    cout << "Please enter 5 digit integer: " ;
    unsigned int input;
    cin >> input;
    
    Palindromes palindrome1(input);
    
    while(palindrome1.countDigit(input) > 5 ||palindrome1.countDigit(input)< 5){
        cout << "Please enter 5 digit integer: " ;
        cin >> input;
    }
    
    // Declare variables
    int firstDigit = input/10000 ;
    int secondDigit = (input/1000)%10 ;
    int fourthDigit = (input/10)%10 ;
    int fifthDigit = input % 10;
    
    // check if 1st digit is equal to 5th digit & 2nd == 4th digit
    if(firstDigit == fifthDigit && secondDigit == fourthDigit){
        cout << "It is a Palindrome. " ;
    } else{
        cout << "It is not a Palindrome. " ;
    }
    
}
