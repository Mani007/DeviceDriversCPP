#include <iostream>
#include <string>
using namespace std;

class Binary_stream{
//private:  // bydefault all the data members are private unless specified as public or protected

    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary_stream::read(void) {
    cout << "Enter a binary string: " << endl;
    cin >> s;
} 
void Binary_stream::chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary digit"<<endl;
            exit(0);
        } 
        cout<<"Yes its binary numbers strings"<<endl;
    }     
}

void Binary_stream::ones_compliment(void){
    chk_bin();  // nesting of member function
    for (int i = 0; i < s.length(); ++i)
    {
        if(s.at(i)=='0')
           s.at(i)='1';
        else
          s.at(i)= '0';
    }
}


void Binary_stream::display(){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); ++i){
        cout<<s.at(i);
    }
}
int main() {
cout << "Hello World!" << endl;

Binary_stream bs;
bs.read();
//bs.chk_bin();  // nesting of member functions, user may not need to use it anymore. We do it internally in the class member functions.
cout<<"\nBEFORE One's compliment of the given binary number is "<<endl;
bs.display();
bs.ones_compliment();
cout<<"\nAfter one's compliment of the given binary number is "<<endl;
bs.display();
return 0;
}