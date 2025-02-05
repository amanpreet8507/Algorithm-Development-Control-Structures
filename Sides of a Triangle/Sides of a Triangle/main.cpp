//
//  main.cpp
//  Sides of a Triangle
//
//  Created by Amanpreeet Sandhu on 2025-01-10.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    double a, b, c;
    cout << "Please enter 3 non zero double values to check if they can make a triangle or not: " ;
    cin >> a >> b >> c;
    
    double smallest, smallest2, largest;
    
    if(a < b && a < c){
        smallest = a;
        smallest2 = (b < c) ? b : c;
    } else if(b < a && b < c){
        smallest = b;
        smallest2 = (a < c) ? a : c;
    } else {
        smallest = c;
        smallest2 = (a < b) ? a : b;
    }
    
    if(a > b && a > c){
        largest = a;
    } else if(b > a && b > c){
        largest = b;
    } else{
        largest = c;
    }
    
    if ( smallest + smallest2 > largest){
        cout << "These sides cannot make a triangle. ";
    } else {
        cout << "These sides will make a triagle. ";
    }
    // find the two smaller values
    // find the biggest value
    
    
    return 0;
}
