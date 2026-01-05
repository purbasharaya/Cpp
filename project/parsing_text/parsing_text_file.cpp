// creating a program to parse a text file and extract spesific info

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main() {

    ifstream input("stats.txt"); // create an input file stream

    if(!input.is_open()){ // checking if file is opened successfully
        return 1; // error opening file
    }

    string fullLine; // this will store one full line from the file

    //read the file line by line
    //getline returns false when there are no more lines to read
    while(getline(input, fullLine)){

        //this will store text before ':       
        string label;
        //this will store integer after ':'
        int population;

        //create a stringstream from the line
        //example "California: 39538223"
        stringstream ss(fullLine);

        //read everything before ':' into label
        getline(ss, label, ':'); // label now contains "California"

        //read the integer after ':' into population
        ss >> population;

        //print the extracted info
        cout << label << ": " << population << endl;
    }

    // while(input){
    //     string line; // to hold each line

    //     getline(input, line, ':'); // read a line from the file

    //     int population;
    //     input >> population; // read the integer value after the colon

    //     input.get(); // to consume the newline character after the integer

    //     if(!input){
    //         break; // break the loop if reading failed
    //     }   

    //     cout << "'" << line << "'" << " -- " << "'" << population << "'" << endl; // print the extracted info
    // }

    input.close(); // close the file
}