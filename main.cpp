#include "file.h"
#include <string>

using namespace std;

int main() {

    int a;
    int valnum;
    string valname;
    string valcolor;

	//SetConsoleCP(1251);
	//SetConsoleOutputCP(1251);

   // setlocale(LC_ALL, "Russian");

    Car rrr(valname, valcolor, valnum);
	Car rrr2;
b:
	cout <<"\press 1 for create car\n";
	cout <<"\press 2 for print car\n";
	cout <<"\press 3 for out from program\n\n";
	cin >>a;

	switch (a)
	{
	    case 1://///////////////////////////////
	        {
    cout << "enter name car: ";
    cin>>valname;
      rrr.SetName(valname);

    cout <<"enter color car's : ";
    cin>>valcolor;
      rrr.SetColor(valcolor);

    cout << "enter number car's :";
    cin>>valnum;
       rrr.SetNumber(valnum);

    Car rrr3 = rrr;
    goto b;
	        }
        case 2://///////////////////////////////////
            {
    cout << "\n";
    cout << "name: " << rrr.GetName() << endl;
	cout << "color: " << rrr.GetColor() << endl;
	cout << "number: " << rrr.GetNumber() << endl << endl;

            cout<<"rrr"<<endl;
            rrr.print();

            cout<<"rrr2"<<endl;
            rrr2.print();

            Car rrr3 = rrr;//use countructor copy
            cout<<"rrr3"<<endl;
            rrr3.print();

	    goto b;
            }
        case 3:////////////////////////////////////////
            {return 0;}
        default://////////////////////////////////////
            {goto b; }
	}
	return 0;
}
