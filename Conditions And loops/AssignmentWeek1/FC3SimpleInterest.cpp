// Simple Imterest

#include <iostream>
using namespace std;

int main()
{

    int principleAmt, rateOfInterest, timePeriod, simpleInterest;
    cout << "Enter Principle Amt: " << endl;
    cin >> principleAmt;
    cout << "Enter rate of interest : " << endl;
    cin >> rateOfInterest;
    cout << "Enter time period: " << endl;
    cin >> timePeriod;

    simpleInterest = (principleAmt * rateOfInterest * timePeriod) / 100;
    cout << "Simple Interest is: " << simpleInterest;

    return 0;
}