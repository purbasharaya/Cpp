
// encapsulation : data hiding
// this means to restrict access to certain components of an object
// (data/properties + methods ) = class

#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    int roll_number; // private attribute

    public:
    string name;
    string major;

    void setRollNumber(int rn){
        roll_number = rn;
    }

    int getRollNumber(){
        return roll_number;
    }
};

//student class in encapsulated way

int main() {
    Student s1;
    s1.name = "Purbasha";
    s1.major = "ECE";
    s1.setRollNumber(73); // setting roll number using setter

    cout << s1.name << endl;
    cout << s1.getRollNumber() << endl; // getting roll number using getter
    return 0;
}