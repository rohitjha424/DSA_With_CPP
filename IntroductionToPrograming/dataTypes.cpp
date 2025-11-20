#include<iostream>
using namespace std;
int main(){
    //int - 4 byte
    int num = 6;
    cout <<num<<endl;
    cout<<sizeof(num)<<endl;

    // char 1 byte 
    char ch = 'a';
    cout<<ch<<endl;
    cout<<sizeof(ch)<<endl;
    
    // float 4 byte 
    float f = 2.49;
    cout<<f<<endl;
    cout<<sizeof(f)<<endl;

    // long 4 byte for 32 bit and 8 byte for 64 bit computers
    long numb = 23;
    cout<<numb<<endl;
    cout<<sizeof(numb)<<endl;

    
    //Garbage Value

    int number;
    cout <<number;


    
    return 0;
}