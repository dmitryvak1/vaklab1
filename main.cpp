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
	cout <<"\t������� 1 ����� ������ ������\n";
	cout <<"\t������� 2 ����� ���������� ������\n";
	cout <<"\t������� 3 ����� �����\n\n";
	cin >>a;

	switch (a)
	{
	    case 1://///////////////////////////////
	        {
    cout << "������ ��� ������: ";
    cin>>valname;
      rrr.SetName(valname);

    cout <<"������� ���� ������: ";
    cin>>valcolor;
      rrr.SetColor(valcolor);

    cout << "������ ����� ������:";
    cin>>valnum;
       rrr.SetNumber(valnum);

    Car rrr3 = rrr;
    goto b;
	        }
        case 2://///////////////////////////////////
            {
    cout << "\n";
    cout << "��� ������: " << rrr.GetName() << endl;
	cout << "���� ������: " << rrr.GetColor() << endl;
	cout << "����� ������: " << rrr.GetNumber() << endl << endl;

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
