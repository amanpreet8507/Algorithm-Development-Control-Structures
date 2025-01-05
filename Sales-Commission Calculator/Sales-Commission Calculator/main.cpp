//
//  main.cpp
//  Sales-Commission Calculator
//
//  Created by Amanpreeet Sandhu on 2024-11-18.
//

#include <iostream>

using namespace std;

int main() {

    // Intialize variables
    double sales;
    // Promt the user to enter sales
    cout << "Enter sales in dollars (-1 to end): ";
    cin >> sales ;
    
    // Use while loop till the user enters -1
    while (sales != -1) {
        // Calculate Salary
        double salary;
        salary = 200 + (sales * 9 /100);
        cout << "Salary is: $" << salary << endl;
        
        // Output Results
        cout << "Enter sales in dollars (-1 to end): ";
        cin >> sales ;
    }
}
