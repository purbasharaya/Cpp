// function call by reference in cpp

#include <bits/stdc++.h>
using namespace std;

void update(int &x) {
    x = x + 100;
}
/*what will happen when we call update(val1) where val1 = 10

so we know that val1 is pointing to 10,
in the function update() x is pointing to the same memory location as val1, 
therefore what ever changes x go through in the function
will happend to val1 as well
and THAT is the catch

lets see for ourselves*/

int main() {
    int val1 = 10;

    cout << "before update() val1 :" << val1 << endl; // this prints 10

    update(val1); // function call by reference

    cout << "after update() val1 :" << val1 << endl; // this prints 110
}

/* what if we made update2() as

void update2(int x){
    x = x + 100;
}
    
and called update2(val1)

in that case both val1 and x are separate copies of the value 10,
so changes done to x inside the function won't affect val1 at all
*/