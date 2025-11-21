#include<iostream>
using namespace std;

int decimaToBinaryMedthod(int num){
int rem ;
int bitToInt=0; //we need to print the result in int format
int place=1;
while(num>0){
rem= num%2;
bitToInt = rem * place + bitToInt;
place= place*10;
num=num/2;
}
return bitToInt;   
}

int main(){
int num;
cout<<"Enter a Decimal Number:"<<endl;
cin>>num;
int result= decimaToBinaryMedthod(num);
cout<<"Binary number is:"<<result<<endl;
}