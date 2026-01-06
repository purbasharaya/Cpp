// lets learn about classes and objects in cpp

#include <iostream>
#include <string>

using namespace std;

// defining a class
class Teacher {
    private:
        // private properties/ attributes
        double salary; // this should be confidential
        // to access private members we need to create public methods called getters and setters
    public: 

        //properties/attributes
        string name;
        int age;
        string department;

        Teacher(){  // this is a constructor and its a non-parameterized constructor
            cout << "Constructor called!" << endl;
            department = "computer science"; // default department
        }

        //parameterized constructor
        Teacher(string n, string a, string d, double sal){
            name = n;
            age = stoi(a);
            department = d;
            salary = sal;
        }

        //copy constructor
        Teacher(Teacher &orgobj){//call by reference
            cout << "i am copy constructor...\n";
            this->name = orgobj.name;
            this->age = orgobj.age;
            this->department = orgobj.department;
            this->salary = orgobj.salary;
        }

        //lets study about this pointer
        Teacher(string name){
            this->name = name; // here left name is object's attribute and right name is parameter
                        // but both are same so compiler gets confused
                        // to avoid this confusion we use 'this' pointer
                        //this->name is same as writing (*this).name
        }


        //methods / member functions
        void changeDepartment(string newDept){
            department = newDept;
        }

        //setter for salary
        void setSalary(double s){
            salary = s;
        }

        //getter for salary
        double getSalary(){
            return salary;
        }

        void getInfo(){
            cout << "name:" << name << endl;
            cout << "age: " << age << endl;
        }
};

// in cpp attributes and member functions are bydefault private
// thus we need access modifiers like public, private, protected
// to access them from outside the class

//public - accessible from outside the class
//private - not accessible from outside the class
// protected - accessible in derived classes


//-----------------------------/----------------------------//
//lets talk about CONSTRUCTORS

//constructor is a special method that is automatically invoked when an object of the class is created
//it is used to initialize objects
// either we create it or compiler creates a default constructor for us
//properties of constructors:
    // 1. same name as class
    // 2. has no return type
    // 3. only called once per object
    // 4. memory allocation happens when object is created
    //***5. there can be multiple constructors in a class but with different parameters (constructor overloading)

// types of constructors:
    // 1. default constructor - no parameters
    // 2. parameterized constructor - with parameters
    // 3. copy constructor - creates a new object as a copy of an existing object
    

int main() {
    Teacher t1("raya", "25", "cse", 100000);
    // Teacher t2;
    // t1.name = "Raya";
    // t1.age = 25;
    // t1.setSalary(100000); // setting salary using setter method

    // cout << t1.name << endl;
    // cout << t1.department << endl;
    Teacher t2(t1); // copy constructor called
    //we can also create a custom copy constructor and call it the same way
    
    cout << t2.getSalary() << endl; // getting salary using getter method
    t2.getInfo();
    return 0;
}