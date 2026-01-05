// 1D and 2D arrays in cpp

#include <iostream>
using namespace std;

int main(){

    //1D array
    int arr1d[5] = {10, 20, 30, 40, 50}; //initialization
    cout << "1D Array elements:" << endl;
    for(int i=0; i<5; i++){ //traversal
        cout << arr1d[i] << " ";
    }
    cout << endl;
    
    //2D array
    int arr2d[3][3] = { //one way of initialization
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    //or 
    int arr2d_alt[][2] = { //another way of initialization (it automatically calculates first dimension)
        {10, 20},
        {30, 40},
        {50, 60}
    };
    //or
    int arr2d_single_line[2][3] = {100, 200, 300, 
                                    400, 500, 600}; // this has 2 rows and 3 columns
    cout << "2D Array elements:" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << arr2d[i][j] << " ";
        }
        cout << endl;
    }

    //if you want to change any element
    arr1d[2] = 35; //changing 3rd element of 1D array
    arr2d[1][1] = 55; //changing element at 2nd row and 2nd column of 2D array
    cout << "Modified 1D Array elements:" << endl;
    for(int i=0; i<5; i++){
        cout << arr1d[i] << " ";
    }
    cout << endl;
    return 0;
}