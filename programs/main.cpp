#include <iostream>
#include <string> // what ever you need you can include it here.

using namespace std; //it is used to avoid writing std:: before every standard library object.
// ; is a terminator in C++ used to mark the end of a statement.
// {} are used to define the beginning and end of a block of code, such as functions or loops.

int main() {  // only one main function is allowed in a C++ program.
    cout << "Hello, World!" << endl;

    int num; // declaring a variable of type integer named num.
    cout << "Enter a number: "; // displaying message to the user.
    cin >> num; // taking input from user and storing it in variable num.

    cout << "Raya" << endl; // This line prints "Raya" followed by a new line to the console.
    cout << 'Raya' << endl; // this line prints garbage value because single quotes are used for character literals in C++.
    cout << 'm' << endl; // this line prints character 'm' followed by a new line to the console.
    // "" is for multiple characters (string literals) and '' is for single character (character literals).

    string str;
    cin >> str; // if we input "hello world"
    cout << str;// this will print only "hello" because cin stops reading input at the first whitespace.

    // solving the above  issue
    string line;
    std::getline(cin, line); // this will read the entire line including spaces.
    cout << line << endl; // this will print the entire line that was read.

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3; // taking three integer inputs from the user in a single line.
    cout << num1 << num2 << num3 << endl; // printing the three integers without spaces.

    /*this is a multi-line comment*/



    return 0;

}

// cout- (console output)Standard output stream in C++ which is coming from the iostream library.

//cin- (console input)Standard input stream in C++ which is coming from the iostream library.

// main function needs return type int because it returns an integer value to the operating system upon completion.

// endl- It is used to insert a new line character and flush the output buffer.

// main() function should return only once, typically at the end of the function.

//cin is used with stream extraction operator (>>) to take input from the user.
//cout is used with stream insertion operator (<<) to display output to the user.
