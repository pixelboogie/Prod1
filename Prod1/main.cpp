//
//  main.cpp
//  Prod1
//
//  Created by Shane Anderson on 8/2/19.
//  Copyright © 2019 Shane Anderson. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;


void CountWords(std::string myString);
string myString = "Hi, this is an example scentence with several spaces.\n";


int main(int argc, const char * argv[]) {
    
    cout << "Hello, this program counts the number of spaces in a string and outputs the total.\n";
    CountWords(myString);
    
    return 0;
}


void CountWords(std::string myString) {
    int numspaces = 0;
    char nextChar;
    // checks each character in the string
    for (int i=0; i<int(myString.length()); i++)
    {
        nextChar = myString.at(i); // gets a character
        if (isspace(myString[i]))
            numspaces++;
    }
    numspaces--; // decrement 1 because of the new line character
    cout << "\nThere are " << numspaces << " spaces in this scentence.\n\n";
    
}



