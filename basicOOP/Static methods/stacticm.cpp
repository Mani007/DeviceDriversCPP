#include <iostream>
using namespace std;
class Employee
{
private:
    int id;
    static int count; // Static variable to hold count of employees. Static variable is also known as class variable. You cannot provide default value here.
public:
    void setData(void)
    {
        cout << "Enter the id of employee:  ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of employee is : " << id << " and this is employee number " << count << endl;
    }
    // This function can only access static variables. It cannot access non-static variables. This is a static function. 
    static void getCount(void)  
    {
        cout<<"Total Employees are for static variables are:  "<<count<<endl; // we cannot access non static variables in static functions.
        //cout<<"The id of employee is : "<<id<<endl; // Error because it is not static variable.
    }
};
int Employee::count = 1000; // default value of 0 will be assign to static variable
int main()
{
    cout << "Hello World!" << endl;
    Employee harry, jacob, wahhade; // All three class instance will share same static variable count.
    // harry.id = 123; // cannot do this as id is private data member
    Employee:: getCount(); // We can call static functions using class name.
    harry.setData();
    harry.getData();
    Employee:: getCount(); // We can call static functions using class name.
    jacob.setData();
    jacob.getData();
    Employee:: getCount(); // We can call static functions using class name.
    wahhade.setData();
    wahhade.getData();
    Employee:: getCount(); // We can call static functions using class name.
    return 0;
}