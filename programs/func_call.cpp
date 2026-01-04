// function call by value and default arguments in cpp

#include <bits/stdc++.h>
using namespace std;

void update(int x, int y){
    cout << "X :" << x << endl;
    cout << "Y :" << y << endl;
}

void update2(int x = 100, int y = 200){
    cout << "X :" << x << endl;
    cout << "Y :" << y << endl;
}

int main() {

    int val1 = 10;
    int val2 = 20;

    update(val1, val2); // function call by value

    update2(); // if we leave it blank it will take the default values
    update2(300);// this will assume 1st value to be 300 and 2nd value to be default 200
    //update2(,400); // this will give error because you cant skip a parameter in between

    return 0;
}