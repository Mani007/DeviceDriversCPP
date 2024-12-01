#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        int count;
    public:
        void setData(void){ 
            cout<<"Enter the id of employee:  "<<endl;
            cin >> id;
        }
        void getData(void){
            cout<<"The id of employee is : "<<id<<endl;

        }

};
int main() {
cout << "Hello World!" << endl;
Employee harry;
//harry.id = 123; // cannot do this as id is private data member
harry.setData();
harry.getData();
return 0;
}