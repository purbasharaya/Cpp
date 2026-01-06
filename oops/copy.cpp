// lets learn about deep copy and shallow copy in cpp

// a shallow copy 

#include <iostream>
#include <string>       
using namespace std;

class Student {
public:

    //these are statically allocated properties
    //meaning memory is allocated at the compile time
    string name;
    int age;

    //dynamically allocated property
    double* cgpaptr;

    //constructor
    Student(string name, int age, double cgpa){
        this->name = name;
        this->age = age;
        cgpaptr = new double; // allocating memory at runtime
        //this "double" is in the heap segment where all the dynamic memory is allocated
        *cgpaptr = cgpa; // dereferencing pointer to store cgpa value
    }

    //copy constructor 
    Student(Student &obj){
        cout << "i am a copy constructor" << endl;
        this->name = obj.name;
        this->age = obj.age;
        this->cgpaptr = obj.cgpaptr;}

    void getInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << *cgpaptr << endl;
    }
};

int main() {
    Student s1("purbasha", 20, 9.1);
    Student s2(s1); // copy constructor is called here
    s2.getInfo();
}