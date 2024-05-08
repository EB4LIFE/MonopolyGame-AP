#ifndef DICE_H
#define DICE_H
#include<iostream>
using namespace std;
class Dice
{
private:
int die1;
int die2;
int sides1;
int sides2;
public:
Dice(int = 6, int = 6);
Dice(const Dice&);
Dice(Dice&&);
void Roll();
int GetDie1() const;
int GetDie2() const;
int GetSum() const;
bool IsDouble() const;
bool IsEqual(const Dice&) const;
Dice GetSwap() const;
};
#endif // !DICE_H
