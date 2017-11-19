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
	
}
