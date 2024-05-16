#include<iostream>
#include "Property.h"
#include "Trade.h"
#include "PropertyEditor.h"
using namespace std;
int main()
{
Property p1("King George St.", 320, 160);
Property p2("Jaffa St.", 300, 150);
p1.Buy(Token(SHOE));
p2.Buy(Token(RACECAR));
Trade *t = new Trade(p1, p2);
t->Print();
t->Apply();
delete t;
t = new Trade(p2, p1);
t->Print();
t->Apply();
delete t;
PropertyEditor pe;
Property p5(pe.CreateProperty());
p5.Print();
return 0;
}