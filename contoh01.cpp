#include <iostream>
using namespace std;

void input(int& jam24, int& menit);
void konversi(int& jam, char& AMPM);
void output(int jam, int menit, char AMPM);

int main(){
int jam, menit;
char AMPM,ans;
do
{
input(jam, menit);
konversi(jam, AMPM);
output(jam, menit, AMPM);
cout << "Masukkan huruf Y atau y untuk mengulang, T atau t keluar : "<< endl; cin >> ans;
} while('Y'== ans || 'y' == ans);
return 0;
}
void input(int& jam24, int& menit)
{
char colon;
system("cls");
cout << "Masukkan 24 jam dengan format HH:MM"<< endl; cin >> jam24 >> colon >> menit;
}
void konversi (int& jam, char& AMPM)
{
if(jam > 12) 
{
jam = jam - 12;
AMPM = 'P';
}
else if (12 == jam)
AMPM = 'P';
else if (0 == jam)
{
jam = jam + 12;
AMPM = 'A';
}
else
AMPM = 'A';
}
void output(int jam, int menit, char AMPM)
{
system ("cls");
cout << "Waktu dalam format 12 jam: " << endl << jam<< ":" << menit << " " << AMPM << 'M' << endl;	
}
