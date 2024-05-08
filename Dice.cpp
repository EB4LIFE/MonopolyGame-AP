#include "Dice.h"
Dice::Dice(int s1, int s2) : sides1(s1),
sides2(s2)
{
Roll();
}
Dice::Dice(const Dice& src) :
sides1(src.sides1), sides2(src.sides2)
{
Roll();
}
Dice::Dice(Dice&& src) :
sides1(src.sides1), sides2(src.sides2)

void Dice::Roll()
{
die1 = rand() % sides1 + 1;
die2 = rand() % sides2 + 1;
}
int Dice::GetDie1() const
{
return die1;
}
int Dice::GetDie2() const
{
return die2;
}
int Dice::GetSum() const
{
return die1 + die2;
}
bool Dice::IsDouble() const
{
return die1 == die2;
}
bool Dice::IsEqual(const Dice& d) const
{
return sides1 == d.sides1 && sides2 ==
d.sides2
&& die1 == d.die1 && die2 ==
d.die2;
}
Dice Dice::GetSwap() const
{
Dice res;
res.sides1 = sides2;
res.sides2 = sides1;
res.die1 = die2;
res.die2 = die1;
return res;
}
