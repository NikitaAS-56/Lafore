
#include <iostream>
using namespace std;
enum etype
{
	laborer, secretary, manager, accountant, executive, researcher
};

int main()
{
	setlocale(0, "");
	char ch;
	etype p1;
	cout << "введите первую букву для поиска ";
	cin >> ch;
	switch (ch)
	{
	case 'l':  p1 = laborer; ; break;
	case 's':  p1 = secretary; break;
	case 'm':  p1 = manager; break;
	case 'a':  p1 = accountant; break;
	case 'e': p1 = executive; break;
	case 'r':  p1 = researcher; break;

	default:
		break;
	
	}
	switch (p1)
	{
	case laborer:cout<<"полное название " << " laborer"; break;
	case secretary:cout << "полное название " << "secretary"; break;
	case manager:cout << "полное название " << " manager"; break;
	case accountant:cout << "полное название " << " accountant"; break;
	case executive:cout << "полное название " << "executive"; break;
	case researcher:cout << "полное название " << "researcher"; break;

	default:
		break;
	}
	cout << endl;
	system("pause");
	
}

