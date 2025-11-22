#include <iostream>
using namespace std;

int decimalToBinary(int num)
{
    int rem;
    int bitToInt = 0; // we need to print the result in int format
    int place = 1;
    while (num > 0)
    {
        rem = num % 2;
        bitToInt = rem * place + bitToInt;
        place = place * 10;
        num = num / 2;
    }
    return bitToInt;
}


int binaryToDecimal(int binResult)
{
    int binToDeci = 0;
    int place = 1;
    while (binResult)
    {

        int extractBit = binResult % 10;
        binToDeci = extractBit * place + binToDeci;
        binResult = binResult / 10;
        place = place * 2;
    }
    return binToDeci;
}

int main()
{
    int num;
    cout << "Enter a Decimal Number:" << endl;
    cin >> num;
    int binResult = decimalToBinary(num);
    cout << "Binary number is:" << binResult << endl;
    int binToDecimalRes = binaryToDecimal(binResult);
    cout << "Decimal number is:" << binToDecimalRes << endl;
}