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
	
}
