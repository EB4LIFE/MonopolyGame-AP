#ifndef TRADE_H
#define TRADE_H
#include "Property.h"
class Trade
{
private: Property p1, p2;
public:
Trade(const Property&, 
 const Property&);
void Apply();
void Print() const;
};
#endif // !TRADE_H