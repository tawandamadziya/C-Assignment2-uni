//Simple calculator
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
 float var1, var2;
 char op;
 cout<< "Please enter the first float value: ";
 cin>>var1;
 cout<< "Please enter the second float value: ";
 cin >>var2;
 cout<< "Please enter the operation required: ";
 cin>>op;

 switch(op){
     case '+':
         cout << "The sum of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << var1 + var2 <<endl;
         break;
     case '-':
         cout << "The difference of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << var1 - var2;
         break;
     case '*':
         cout << "The multiplication of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << var1 *var2;
         break;
     case '/':
         cout << "The division of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed << var1 / var2;
         break;
     case '%':
         cout << "The reminder of " << var1 << " and " << var2 << " is " << setprecision(2) << fixed <<fmod(var1, var2);
         break;

     default:
         cout<<"Invalid operation\n";
}
 return 0;
}
