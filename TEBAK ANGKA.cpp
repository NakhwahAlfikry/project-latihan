#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

int tebak;
int angkarandom;

do{
cout << "===================" << endl;
cout << "#   TEBAK ANGKA   #" << endl;
cout << "===================" << endl;
cout << "TEBAK ANGKA 1-10 = ";
cin >> tebak;

cout << endl;

srand(time(0));

angkarandom = rand () % 10;

if (tebak == angkarandom)
{
cout << "===================" << endl;
cout << "TEBAKAN ANDA BENAR : "<<tebak << endl;
cout << "===================" << endl << endl;
goto keluar;
}
else{
cout << "===================" << endl;
cout << "MAAF TEBAKAN SALAH" << endl;
cout << "ANGKA YANG BENAR = " << angkarandom << endl;
cout << "===================" << endl << endl;
}

}while(tebak <= 10);

keluar:
cout << "TERIMAKASIH SUDAH BERMAIN";

}