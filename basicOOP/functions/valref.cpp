// Call by value and call by ref
#include <iostream>
using namespace std;
// funtion prototype
int sum(int , int );
int sumref(int*,int*);
void somefun(void);

int main() {
    int n1,n2;
    cout<<"Hello"<<endl;
    cout<<"Enter the num 1 as n1 "<< endl;
    cin>>n1;
    
    cout<<"Enter the num 2 as n2 "<< endl;
    cin>>n2;

    cout<<"The sum of n1,n2 call by value is "<<sum(n1,n2)<<endl;
    cout<<"The sumref  of n1,n2 is call by ref is "<<sumref(&n1,&n2)<<endl;
    somefun();
    return 0;
}

// function defination
int sum(int a, int b){
    return a+b;
}

int sumref(int *a,int *b){
    return *(a) + *(b);
}

void somefun(){
    cout<<"\n hello from some fun!!!"<<endl;
}
