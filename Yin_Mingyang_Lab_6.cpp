// Mingyang Michelle Yin / Owen 
// Oct 15, 2024
// Lab 6

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

main () 
{
        // Varaibles
    int num1;
    int num2;
    int sum;
    char char1;
    char char2;
    string  string1;

        // Creates and reads the files
    ifstream inFile;
    ofstream outFile;

        // Opens both files
    inFile.open("inData.txt");
    outFile.open("outData.txt");

    cout<<"Program to review streams.....\n";

        // dealing with the number in the file
    inFile >> num1 >> num2; // reads the number from the input file
    outFile << "Number 1: " << num1 << endl; // tells the user what the first int is. 
    outFile << "Number 2: " << num2 << endl; // tells the user what the second int is. 
    sum = num1 + num2; // finds tje sum of the inputed numbers.
    outFile << "Sum: " << sum << endl; // tells the user what the sum is. 

        // dealing with the characters in the file 
    inFile >> char1; // reads the characters from the input file
    outFile << "Character: " << char1 << endl; // tells the user what the first char is. 
    char2 = char1 + 1; // finds what the next char is.
    outFile << "Next character: " << char2 << endl; // tells the user what the next char is. 

        // dealing with the sting in the file 
    inFile >> string1; // reads the string from the input file
    outFile << "String: " << string1 << endl; // tells the user what the string is. 

        // closes both files
     inFile.close();
     outFile.close();

    return 0;
}
/*
    //OUTPUT//

    INDATA:

        55 120
        q
        Yes...

    OUTDATA:
    
        Number 1: 55
        Number 2: 120
        Sum: 175
        Character: q
        Next character: r
        String: Yes...

*/