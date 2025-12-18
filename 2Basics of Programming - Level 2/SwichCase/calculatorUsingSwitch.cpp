// Calculator using Switch

#include <iostream>
using namespace std;

int main(){

    float a, b, result;
    cout<<" enter Two Numbers:"<<endl;
    cin>>a>>b;
    int op;
    cout<<"What operation you wannna do?"<<endl;
    cin>>op;
    // op= 0>>add ; op = 1>>sub; op = 2 >>multiply; op = 3>>divide;

    switch(op){
        case '0': result = a+b;
        case '1': result = a-b;
        case '2': result = a*b;
        case '3': result = a/b;
        default: cout<<"invalid operation"<<endl;

    }
    cout<<result<<endl;
    return 0;
}
