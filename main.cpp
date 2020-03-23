#include "file.h"
#include <string>

using namespace std;

int main() {

    int a;
    int valnum;
    string valname;
    string valcolor;

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    setlocale(LC_ALL, "Russian");

    Car rrr(valname, valcolor, valnum);
	Car rrr2;
b:
	cout <<"\tНажмите 1 чтобы ввести машину\n";
	cout <<"\tНажмите 2 чтобы посмотреть машину\n";
	cout <<"\tНажмите 3 чтобы выйти\n\n";
	cin >>a;

	switch (a)
	{
	    case 1://///////////////////////////////
	        {
    cout << "Внести имя машины: ";
    cin>>valname;
      rrr.SetName(valname);

    cout <<"введите цвет машины: ";
    cin>>valcolor;
      rrr.SetColor(valcolor);

    cout << "Внести номер машины:";
    cin>>valnum;
       rrr.SetNumber(valnum);

    Car rrr3 = rrr;
    goto b;
	        }
        case 2://///////////////////////////////////
            {
    cout << "\n";
    cout << "Имя машины: " << rrr.GetName() << endl;
	cout << "цвет машины: " << rrr.GetColor() << endl;
	cout << "номер машины: " << rrr.GetNumber() << endl << endl;

            cout<<"rrr"<<endl;
            rrr.print();

            cout<<"rrr2"<<endl;
            rrr2.print();

            Car rrr3 = rrr;
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
