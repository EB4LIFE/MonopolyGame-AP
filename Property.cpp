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