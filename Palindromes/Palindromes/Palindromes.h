//
//  Palindromes.h
//  Palindromes
//
//  Created by Amanpreeet Sandhu on 2024-12-05.
//
#include <string>
class Palindromes {
public:
    //Constructor
    explicit Palindromes(int c):count(c){};
    //Setters
    void setCount(int c){
        count = c;
    }
    //Member function to count digits
    int countDigit(int n) const {
            int digitCount = 0;
            if (n == 0) {
                return 1; // Special case for 0
            }
            while (n != 0) {
                n = n / 10;
                ++digitCount;
            }
            return digitCount;
        }
private:
    unsigned int count{0};
};
