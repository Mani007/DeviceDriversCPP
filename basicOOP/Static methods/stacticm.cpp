#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        static int count; // Static variable to hold count of employees. Static variable is also known as class variable. 
    public:
        void setData(void){ 
            cout<<"Enter the id of employee:  ";
            cin >> id;
            count++;
        }
        void getData(void){
            cout<<"The id of employee is : "<<id<< " and this is employee number "<<count<<endl;

        }

};
int Employee::count;//default value of 0 will be assign to static variable
int main() {
cout << "Hello World!" << endl;
Employee harry, jacob,wahhade; // All three class instance will share same static variable count.
//harry.id = 123; // cannot do this as id is private data member
harry.setData();
harry.getData();
jacob.setData();
jacob.getData();
wahhade.setData();
wahhade.getData();
return 0;
}