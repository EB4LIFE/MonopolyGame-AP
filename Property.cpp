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
Property::Property(Property&& src) 
: owner(src.owner), 
bank_value(src.bank_value), 
mortgage_value(src.mortgage_value),
is_owned(src.is_owned),
is_mortgaged(src.is_mortgaged)
{
name = src.name;
src.name = NULL;
}
Property::Property(Property&& src) 
: owner(src.owner), 
bank_value(src.bank_value), 
mortgage_value(src.mortgage_value),
is_owned(src.is_owned),
is_mortgaged(src.is_mortgaged)
{
name = src.name;
src.name = NULL;
}
Property::Property(const Property& src) 
: owner(src.owner), 
bank_value(src.bank_value), 
mortgage_value(src.mortgage_value),
is_owned(src.is_owned), 
is_mortgaged(src.is_mortgaged)
{
if (src.name == NULL)
{
name = NULL;
return;
}
name = new char[strlen(src.name)+1];
strcpy(name, src.name);
}
Property::~Property()
{
if (name == NULL)
return;
delete[] name;
}
int Property::GetBankValue() const
{
return bank_value;
}
int Property::GetMortgageValue() const
{
return mortgage_value;
}
void Property::Buy(const Token& t)
{
is_owned = true;
owner = t;
}
Token Property::GetOwner() const
{
return owner;
}
void Property::Mortgage()
{
if (!is_owned)
return;
is_mortgaged = true;
}
void Property::Unmortgage()
{
if (!is_owned)
return;
is_mortgaged = false;
}
bool Property::IsMortgaged() const
{
return is_mortgaged;
}
void Property::Print() const
{
cout<<"Name: "<<name<<endl;
cout<<"Price: "<<bank_value<<endl;
cout<<"Mortgage: "
 <<mortgage_value<<endl;
}