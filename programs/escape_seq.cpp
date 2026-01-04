#include <iostream>
using namespace std;

int main(){
    cout << "I love cpp" << endl; // this will print "I love cpp" and move to a new line

    cout << "I" << endl << "love cpp" << endl; // this will print "I" and "love cpp" in separate lines

    //there is another way to do this
    cout << "I\nlove cpp" << endl; // \n is an escape sequence that represents a new line
    // \t gives tab space
    // \* this will print *
    // \\ this will print backslash
    // \b this will give backspace

    cout << "I\bLove Cpp" << endl; // this will print "Love Cpp"

    return 0;

}