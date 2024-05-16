#include "PropertyEditor.h"
Property PropertyEditor::CreateProperty() 
const
{
char name[101];
int bv, mv;
cout << "Enter name: ";
cin >> ws;
cin.getline(name, 100);
cout << "Enter Price: ";
cin >> bv;
cout << "Enter mortgage value: ";
cin >> mv;
Property res(name, bv, mv);
return res;
}
