// function overloading in cpp

#include <iostream>
using namespace std;

//function to add two integers
int add(int a, int b){
    cout << "first" << endl;
    return a+b;
}

//function to add two doubles
double add(double a, double b){
    cout << "second" << endl;
    return a+b;
}



int main(){
    int a = 3, b = 5;
    double x = 2.5, y = 5.6;

    cout << add(a, b) << endl; // this calls the first func because the data types match
    cout << add(x, y) << endl; // this calls the second func 

    return 0;

}

/*
double add(int a, int b){
    cout << "second" << endl;
    return a+b;
}
    the above function will give a compilation error because its signature is same as the first function
    function overloading requires different signatures (different number or types of parameters)
*/


/*-----rules where function overloading will not work

1. func declarations that only differ in return type.
2. In class if we have similar function name and parameter but one is static and another is non-static.
3. when we receive array as pointer or array both are similar.
int add(int arr[]);
void add(int *p); these two functions are similar.

4. constant and volatile doesn't make any difference in function overloading.
int add(int arr);
void add(volatile int p) or const int p; these two functions are similar.

5. one func parameter declared as func type and another as pointer to the same function type are equivalent.
int add(int ())
int add(int (*)()) these two functions are similar.

6. two functions where one has default arguments of same type as another function parameter.
int add(int x)
int add(int p = 10) these two functions are similar because default arguments are not considered in function overloading.
*/