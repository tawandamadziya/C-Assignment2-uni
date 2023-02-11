#include <iostream>
using namespace std;
int main()
{
 // Part 1
 float total_purchase;
 float price;
 cout << " Enter total purchase: ";
 cin >> total_purchase;
 int c;
 cout << " Choose type of customer:\n1. Student\n2. Book dealer\n3. Pensioner\n4. Other\n";
 cin >> toupper(c);
 switch(c)
 {
 case 'S':
 price = total_purchase * 0.9;
 cout << "\n Price after discount = " << price;
 break;
 case 'D':
 price = total_purchase * 0.88;
 cout << "\n Price after discount = " << price;
 break;
 case 'P':
 price = total_purchase * 0.85;
 cout << "\n Price after discount = " << price;
 break;
 case 'O':
 price=total_purchase
 if ( total_purchase > 200)
    {
        price = total_purchase * 0.9;
    }
cout << "\n Price after discount = " << price;
 break;
default:
    cout << "\n Wrong value!";
}

return 0;
}

