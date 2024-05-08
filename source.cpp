#include<iostream>
#include<ctime>
#include "Dice.h"
using namespace std;
int main()
{
srand((unsigned)time(NULL));
Dice d1(12, 20);
Dice d2 = d1;
cout << "First pair of dice: " <<
d1.GetDie1() << ", " << d1.GetDie2() << endl;
cout << "Second pair of dice: " <<
d2.GetDie1() << ", " << d2.GetDie2() << endl;
cout << "Is the first pair equal to itself? ";
cout << (d1.IsEqual(d1) ? "Yes" : "No") << endl;
cout << "Is the first pair equal to the second pair? ";
cout << (d1.IsEqual(d2) ? "Yes" : "No") << endl;
Dice d3 = d2.GetSwap();
cout << "Third pair of dice: " <<
d3.GetDie1() << ", " << d3.GetDie2() << endl;
return 0;
}
