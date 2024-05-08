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
