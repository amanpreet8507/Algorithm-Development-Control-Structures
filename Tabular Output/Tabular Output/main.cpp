//
//  main.cpp
//  Tabular Output
//
//  Created by Amanpreeet Sandhu on 2024-11-21.
//

#include <iostream>

using namespace std;
int main() {
    // Intializing variables declarations
    int n{1};
    
    cout << "N\t10*N\t100*N\t1000*N" << endl;

    // while statement to control the output
    while (n <= 5) {
        cout << n*1 << "\t" << n*10 << "\t\t" << n*100 << "\t\t" << n*1000 << endl;
        n++;
    }
    return 0;
}
