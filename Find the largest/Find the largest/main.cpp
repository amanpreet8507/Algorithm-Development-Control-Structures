//
//  main.cpp
//  Find the largest
//
//  Created by Amanpreeet Sandhu on 2024-11-20.
//

#include <iostream>

using namespace std;

int main() {
    // Intializing variables in declarations
    unsigned int counter{1};
    int number;
    int largest{0};
    int secondLargest{0};
    
    // Process 10 numbers using counter-controlles loop
    while (counter <= 10) {
        // Prompt user to input and obtain value from user
        cout << counter << ": Enter a number: " ;
        cin >> number ;
                
        // If ... else is nested in the while statement
        if(number > largest){
            secondLargest = largest;
            largest = number;
        } else if(number > secondLargest && number != largest){
            secondLargest = number;
        }
        
        // Increase counter so loop eventually terminates
        counter ++;
    }
    // Output results
    cout << "The two largest numbers are: " << largest << " and " << secondLargest << endl;
    
}
