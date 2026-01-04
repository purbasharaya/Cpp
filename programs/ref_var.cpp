#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int &r = x; // r is a reference variable referring to x
    int y = x;

    /*suppose x -> 10
    r -> 10 in the same memory location
    if you change the value of r, the value of x will also change and vise versa.
    
    where as y -> value of x in a different memory location*/

    return 0;

    
}