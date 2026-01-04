// que: what is the difference between reference and pointers in cpp

#include <iostream>
using namespace std;

int main() {
    int i = 10;
    int &r = i; // r is a ref var referring to i
    int *p = &i; // p is a pointer valriable pointing to i

    cout << &r <<'\t'<< &p << endl; // they hold different memory locations
    cout << &i << '\t' << &r << endl; // both store the same memory location

    int var = 90;
    r = var; // this will assign the value of var to i through r
    p = &var; // this will make p point to var
    *p = 60; // this will change the value of var to 60 through p


    return 0;
}

// ----- comments -----
/*
1. memory address is not given to the reference variable. when you create a variable, table of var -> address is created which stores addresses of the given variables and references.

2. Reassignment is not possible with reference variables. Once a reference is initialised to a variable, it cannot be changed to refer to another variable.

3. Pointers can be reassigned to point to different variables, while references cannot.

4. pointers can be initialized to nullptr, whereas references must be initialized to a valid variable.
eg. int *p = NULL; // valid
    int &r; //invalid

5. arithmatic operations can be performed on pointers and not on references.

6. indirection is not given in references. when you use a reference variable, it directly accesses the value of the variable it refers to. with pointers, you need to use the dereference operator (*) to access the value stored at the memory address.

eg. int **ptr = &p; // pointer to pointer
    int ***ptr1 = &ptr; pointer to pointer to pointer
*/
