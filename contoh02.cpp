#include <iostream>
using namespace std;

void input(int& kaki, double& inci);
void konversi (int kaki, double inci, double& meter);
void output(int kaki, double inci, double meter);

int main(){
	int kaki;
	double inci, meter;
	char ans;
do
{
input(kaki, inci);
konversi(kaki, inci, meter);
output(kaki, inci, meter);
cout << "Untuk Melanjutkan ketik Y atau y, Untuk Mengakhiri ketik T atau t : "<< endl; cin >> ans;
} while('Y' == ans || 'y' == ans);
return 0;
}
void input(int& kaki, double& inci)
{
system ("cls");
cout << "Masukkan Nilai Kaki Sebagai Integer : " << flush ; cin >> kaki ;
cout << "Masukkan Nilai Inci Sebagai Double: " << flush; cin >> inci;
}
const double METERS_PER_FOOT = 0.3048;
const double INCHES_PER_FOOT = 12.0;
void konversi(int kaki, double inci, double& meter)
{
meter = METERS_PER_FOOT * (kaki + inci/INCHES_PER_FOOT);
}
void output(int kaki, double inci, double meter)
{
cout.setf(ios::showpoint);
cout.setf(ios::fixed);
cout.precision(2);
system ("cls");
cout << "Hasil Perhitungan Nilai Kaki : " << kaki << " Kaki" << endl; 
cout << "Hasil Perhitungan Nilai Inci : " << inci << " Inci" << endl;
cout << "Dikonversi ke Meter, Centimeter : " << meter << endl;
 }
	

