#include<iostream>
using namespace std;

int decimalToBinary(int num){
int rem ;
int bitToInt=0; //we need to print the result in int format
int place=1;
while(num>0){
int bit = (num & 1);
bitToInt = bit * place + bitToInt;
place= place*10;
num= num>>1;
}
return bitToInt;   
}

int main(){
int num;
cout<<"Enter a Decimal Number:"<<endl;
cin>>num;
int result= decimalToBinary(num);
cout<<"Binary number is:"<<result<<endl;
}