#include <iostream>
using namespace std;


bool ConvertToLowestTerms(int &pembilang, int &penyebut);
bool ConvertToLowestTerms(int &pembilang, int &penyebut)
{
if (penyebut == 0)
return false;

int FPB = penyebut;
if (FPB > pembilang)
FPB = pembilang;
while (((pembilang % FPB) != 0) ||
((penyebut % FPB) != 0))
{
FPB--;
}
pembilang /= FPB;
penyebut /= FPB;
return true;
}

int main(){
	int pembilang, penyebut;
	pembilang = 36;
	penyebut = 6;
	cout << pembilang << " / " << penyebut<< " = ";
	ConvertToLowestTerms(pembilang, penyebut);
	cout << pembilang << " / " << penyebut << endl;
	pembilang = 43;
	penyebut = 17;
	cout << pembilang << " / " << penyebut<< " = ";
	ConvertToLowestTerms(pembilang, penyebut);
	cout << pembilang << " / " << penyebut << endl;
	pembilang = 0;
	penyebut = 0;
	cout << pembilang << " / " << penyebut<< " = ";
	ConvertToLowestTerms(pembilang, penyebut);
	cout << pembilang << " / " << penyebut << endl;
	pembilang = 165;
	penyebut = 45;
	cout << pembilang << " / " << penyebut<< " = ";
	ConvertToLowestTerms(pembilang, penyebut);
	cout << pembilang << " / " << penyebut << endl;
	cout << "Ketik apa saja untuk keluar dari output." << endl;
	char wait; cin >> wait;
	return 0;
}
