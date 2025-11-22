#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter a Number" << endl;
    cin >> num;

    if (num > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if(num<0)
    {
        cout << "Negative Number" << endl;
    }
    else{
        cout<<"Number is Zero !!!"<<endl;
    }
    return 0;
}