#include <iostream>
using namespace std;
class Employee {
    private:
        int a,b,c;  // WE NEED METHODS inside this class to access these variables. 
    public:
        int d,e; 
        void setData(int a1,int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
// Implementation of the declared class Employee method called set data. 
void Employee ::setData(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee harry;
    //harry.a=45; //This will throw error as a is private
    harry.d=34;
    harry.e=89;
    harry.setData(2,6,7);
    harry.getData();

    return 0;
}










// #include<iostream>
// using namespace std;


// class Employee{
// private:
//      int id;//data member (also instance variable)
// public:
//      string name;//data member(also instance variable)

//       Employee(){//constructor
// public:
//     // Constructor for employee class
//     Employee(int i) {id = i;}
//     // display function to show the id of an employee
//     void printId() const { cout <<"Your employee ID is: "<< id << endl;} //const function
// };


// int main() {
// cout << "Hello World! creating employee \n" << endl;

// // Creating an employee object with id 100
//  cout << "creating employee with ID:100 " << endl;
// Employee emp(100);

// // Displaying the id of the employee using the printId function
// emp.printId();
// return 0;
// }