// Calculator using Switch

#include <iostream>
using namespace std;

int main()
{

    float a, b, result;
    cout << " enter Two Numbers:" << endl;
    cin >> a >> b;
    int op;
    cout << "What operation you wannna do?" << endl;
    cin >> op;
    // op= 0>>add ; op = 1>>sub; op = 2 >>multiply; op = 3>>divide;

    switch (op)
    {
    case 0:
        cout << "Addition of given Numbers is:";
        result = a + b;
        break;

    case 1:
        cout << "Substraction of given Numbers is:";
        result = a - b;
        break;

    case 2:
        cout << "multiplication of given Numbers is:";
        result = a * b;
        break;

    case 3:
        cout << "Division of given Numbers is:";
        result = a / b;
        break;
    default:
        cout << "invalid operation" << endl;
        break;
    }
    cout << result << endl;
    return 0;
}
