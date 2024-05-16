#ifndef PROPERTY_H
#define PROPERTY_H
#define _CRT_SECURE_NO_DEPRECATE
#include<iostream>
#include "Token.h"
using namespace std;
class Property
{
private:
char *name;
int bank_value;
int mortgage_value;
Token owner;
bool is_owned;
bool is_mortgaged;
public:
Property(const char*, int, int);
Property(const Property&);
Property(Property&&);
~Property();
int GetBankValue() const;
int GetMortgageValue() const;
void Buy(const Token&);
Token GetOwner() const;
void Mortgage();
void Unmortgage();
bool IsMortgaged() const;
void Print() const;
};
#endif // !PROPERTY_H
Property.cpp:
#include "Property.h"
Property::Property(const char *_name, 
 int bv, int mv) 
: owner((TOKEN_NAME)-1), 
bank_value(bv), mortgage_value(mv), 
is_owned(false), is_mortgaged(false)
{
if (_name == NULL)
return;
name = new char[strlen(_name) + 1];
strcpy(name, _name);
}