// 1D and 2D arrays in cpp

#include <iostream>
using namespace std;

//passing 1d array to function
void func(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << endl;
    }
}

//passing 2d array to function
//1st way
const int c = 3; //number of columns must be known
void func2d(int arr[][c], int r){
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

//2nd way
const int r = 3; //number of rows must be known
const int c = 3; //number of columns must be known
//void func2d_alt(int arr[r][c])

//3rd way using pointer
//void func2d_ptr(int *arr, int rows, int cols){

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

    //calling function with array
    int size_arr1 = sizeof(arr1d)/sizeof(arr1d[0]);
    func(arr1d, size_arr1);

    //func2d_ptr((int*)arr2d, 3, 3);
    return 0;
}