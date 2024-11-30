#include <iostream>
#include <string>
using namespace std;

class Binary_stream{
    string s;
public:
    void read(void);
    void chk_bin(void);
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
int main() {
cout << "Hello World!" << endl;

Binary_stream bs;
bs.read();
bs.chk_bin();
return 0;
}