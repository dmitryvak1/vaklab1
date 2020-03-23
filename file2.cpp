#include "file.h"
#include <string>

void Car::SetName(string valname) {
    name = valname;
}
void Car::SetColor(string valcolor) {
    color = valcolor;
}
bool Car::SetNumber(int valnum) {
    if (valnum < 0)
    {
       return false;
    }
    else{number=valnum;}
}

Car::Car(string valname, string valcolor, int valnum) {

    if (!SetNumber(valnum))
    {
        number = 0;

    }
    name = valname;
	color = valcolor;
}

Car::Car() {
	name = "ferari";
	color = "red";
	number = 777;
}

Car::Car(const Car &rrr3) {
	name = rrr3.name;
	color = rrr3.color;
	number = rrr3.number;
}


void Car::print() {
	cout << name << "/" <<color<< "/" << number << "\n\n";
}

string Car::GetName() { return name; }
string Car::GetColor() { return color; }
int Car::GetNumber() { return number; }
