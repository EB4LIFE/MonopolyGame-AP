#include "Trade.h"
Trade::Trade(const Property &l, const
Property &r) : p1(l), p2(r) {}
void Trade::Apply()
{
Token o1 = p1.GetOwner();
Token o2 = p2.GetOwner();
if (o1.Get() < 0 || o2.Get() < 0)
return;
if (o1.Get() == o2.Get())
return;
p1.Buy(o2);
p2.Buy(o1);
}
void Trade::Print() const
{
cout << "Trading:" << endl;
cout << "First Property: " << endl;
p1.Print();
cout << "Owned by: ";
if (p1.GetOwner().Get() >= 0)
p1.GetOwner().Print();
else
cout << "No owner";
cout << endl;
cout << "Second Property: " << endl;
p2.Print();
cout << "Owned by: ";
if (p2.GetOwner().Get() >= 0)
p2.GetOwner().Print();
else
cout << "No owner";
cout << endl;
}