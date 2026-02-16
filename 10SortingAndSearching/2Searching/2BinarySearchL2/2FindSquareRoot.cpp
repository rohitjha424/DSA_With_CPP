// Find Square root of a number >> return only integer part if decimal

#include <iostream>
using namespace std;

int checkSqaure(int x){
    int result = x*x ;
        return result;
}

void findSquareRoot(int num)
{

    int start = 0;
    int end = num;
     while (start <= end)
    {
        int mid = start + (end - start) / 2;
        
        if(checkSqaure(mid) == num){
            cout<< mid;
            break;
        }
        if(checkSqaure(mid) > num){
            end = mid -1;
        }
        else{
            start = mid +1;
        }

    }

}

int main()
{
    int num;
   cout<<"Enter a Number:"<<endl;
   cin>>num;


    findSquareRoot(num);

    return 0;
}