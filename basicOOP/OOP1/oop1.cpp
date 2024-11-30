#include <iostream>
using namespace std;
class Employee {
        int id;
public:
    // Constructor for employee class
    Employee(int i) {id = i;}
    // display function to show the id of an employee
    void printId() const { cout <<"Your employee ID is: "<< id << endl;} //const function
};


int main() {
cout << "Hello World! creating employee \n" << endl;

// Creating an employee object with id 100
 cout << "creating employee with ID:100 " << endl;
Employee emp(100);

// Displaying the id of the employee using the printId function
emp.printId();
return 0;
}