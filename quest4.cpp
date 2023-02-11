#include <iostream>
using namespace std;
int main()
{
 // Part 2
 float total_purchase;
 float price;
 cout << "\n Enter total purchase: ";
 cin >> total purchase;
 int c;
 cout << " Choose type of customer:\n1. Student\n2. Book dealer\n3. Pensioner\n4. Other\n";
 cin >> c;
 c=toupper(c)
 if(c==1)
 {
 Price = total_purchase * 0.9;
 if else(c==2)
 Price = total_purchase * 0.88;
 if else(c==3)
 Price = total_purchase * 0.85;
 if else(c==4)
 if( total purchase > 200){price = total_purchase * 0.9;
 }
 else { price = total_purchase}
 else{cout << "\n Wrong value!;
 }
} cout << "\n Price after discount = " << price;
return 0;
