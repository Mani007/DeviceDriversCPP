#include <iostream>
using namespace std;

int sum(int a, int b);

int main() {
    int n1,n2;
    cout<<"Hello"<<endl;
    cout<<"Enter the num 1 as n1 "<< endl;
    cin>>n1;
    
    cout<<"Enter the num 2 as n2 "<< endl;
    cin>>n2;

    cout<<"The sum of 3,4 is "<<sum(n1,n2)<<endl;
    return 0;
}

int sum(int a, int b){
    return a+b;
}
