#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

double ConvertToMPH(int kecepatanMin, int kecepatanPersec);
double ConvertToMPH(double kph);
double ConvertToMPH(int kecepatanMin, int kecepatanPersec){

int secspermile;
double mph;
secspermile = kecepatanMin * 60 + kecepatanPersec;
mph = (1 / static_cast<double>(secspermile)) * 3600;
return mph;
}

double ConvertToMPH(double kph){
double mph;
mph = kph / 1.61;
return mph;
}

int main(){
	cout << "Kecepatan 05:30 adalah " << ConvertToMPH(5,30) << " MPH." << endl;
	cout << "Kecepatan 09:20 adalah " << ConvertToMPH(9,20) << " MPH." << endl;
	cout << "Kecepatan 10:00 adalah " << ConvertToMPH(10,0) << " MPH." << endl;
	cout << "08  kph adalah " << ConvertToMPH(8) << " MPH." << endl;
	cout << "15  kph adalah " << ConvertToMPH(15) << " MPH." << endl;
	cout << "125 kph adalah " << ConvertToMPH(125) << " MPH." << endl << endl;
	
}
