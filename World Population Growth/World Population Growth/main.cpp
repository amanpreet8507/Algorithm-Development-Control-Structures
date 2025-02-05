//
//  main.cpp
//  World Population Growth
//
//  Created by Amanpreeet Sandhu on 2025-02-04.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    // declare variables
    //double growthRate = 0.85;
    int year = 2023;
    float worldPopulation = 8025000000;
    int numericalIncrease = 70000000;
    
    // display headers
    cout << "Year " << setw(20) << " World population at the end of year " << setw(20) << " Numerical increase in population " << endl;
    
    while (year <= 2098) {
        
       worldPopulation += numericalIncrease ;
        cout << year++ << setw(20) << worldPopulation/1000000000 << " billion" << setw(20) << numericalIncrease / 10000000 << " million" << endl;
    }
    
}
