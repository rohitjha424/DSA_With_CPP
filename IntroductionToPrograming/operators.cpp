#include <iostream>
using namespace std;

int main()
{

   //******** Arthematic Operators  ************/

   // Addition Operation : +
   int a = 10;
   int b = 5;
   cout << "a + b = " << a + b << endl;

   // Sub operator : -
   cout << "a-b = " << a - b << endl;

   // Multiply Operator: *
   cout << "a*b = " << a * b << endl;

   // Dvide Operator: /
   cout << "a/b = " << a / b << endl;

   // Reminder or Modulus or reminder operator: %
   cout << "a%b = " << a % b << endl;

   //******** Relational Operators  ************/

   // Greater Than : > (will retult in 1 if true and 0 if false)

   cout << "(a>b) " << (a > b) << endl;

   // Less Than : < (will retult in 1 if true and 0 if false)
   cout << "(a<b) " << (a < b) << endl;

   // Greater Than or Equal to : >= (will retult in 1 if true and 0 if false)
   cout << "(a>=b) " << (a >= b) << endl;

   // Less Than or Eqaul to: <= (will retult in 1 if true and 0 if false)
   cout << "(a<=b) " << (a <= b) << endl;

   // Not Eqaul to: != (will retult in 1 if true and 0 if false)
   cout << "(a!=b) " << (a != b) << endl;

   // Eqaul to: == (will retult in 1 if true and 0 if false)
   cout << "(a==b) " << (a == b) << endl;

   //******** Assignment Operator: =  ************/

   int c;
   c = b; // b's value has been assigned to c;
   cout << "Assigned Value to c is : " << c << endl;

   //******** Logical Operator  ************/

   // Logical And : && >>> Both Condition Should be true
   int age = 20;
   int car = 3;
   if (age >= 18 && car >= 1)
   {
      cout << "Eligible for Licence" << endl;
   }
   else
   {
      cout << "Not eligible" << endl;
   }

   // Logical OR : || >>> any one Condition Should be true
   int newAge = 17;
   if (newAge >= 18 || car >= 1)
   {
      cout << "Eligible for Licence" << endl;
   }
   else
   {
      cout << "Not eligible" << endl;
   }

   // Logical NOT : ! >>>  Checks if not>> print 0 if false and prints 1 if true

   cout << !age << endl; // will make a true interger value to false >> will result in 0

   //******** Bitwise Operator  ************/

   return 0;
}