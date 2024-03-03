#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{


int pilih;
int jalanb;
string bot;
string main;

mainl:

cout << "=======================" << endl;
cout << "# BATU GUNTING KERTAS #" << endl;
cout << "=======================" << endl;

cout << endl << endl;

cout << "=========================" << endl;
cout << "# PILIH SALAH SATU :    #" << endl;
cout << "=========================" << endl;
cout << "# 1. BATU               #" << endl;
cout << "=========================" << endl;
cout << "# 2. GUNTING            #" << endl;
cout << "=========================" << endl;
cout << "# 3. KERTAS             #" << endl;
cout << "=========================" << endl;
cout << "PILIH : ";
cin >> pilih;

cout << endl << endl;

if (pilih == 1)
{
cout << "====================" << endl;
cout << "# PLAYER : BATU    #" << endl;
cout << "====================" << endl;
}

else if (pilih == 2)
{
cout << "====================" << endl;
cout << "# PLAYER : GUNTING #" << endl;
cout << "====================" << endl;
}
else if(pilih == 3)
{
cout << "====================" << endl;
cout << "# PLAYER : KERTAS  #" << endl;
cout << "====================" << endl;
}
else{
cout << "PILIHAN TIDAK VALID";
}


//lawan nya / bot
srand(time(0));
jalanb = rand () % 3 +1;

if (jalanb == 1)
{
cout << "====================" << endl;
cout << "# BOT : BATU       #" <<endl;
cout << "====================" << endl;
}

else if (jalanb == 2)
{
cout << "====================" << endl;
cout << "# BOT : GUNTING    #" << endl;
cout << "====================" << endl;
}
else if(jalanb == 3)
{
cout << "====================" << endl;
cout << "# BOT : KERTAS     #" << endl;
cout << "====================" << endl;
}

//hasil

//SERI
if(pilih == 1 && jalanb == 1)
{
cout << "==============" << endl;
cout << "# SERI(DRAW) #" << endl;
cout << "==============" << endl;
}

else if(pilih == 2 && jalanb == 2)
{
cout << "==============" << endl;
cout << "# SERI(DRAW) #" << endl;
cout << "==============" << endl;
}

else if(pilih == 3 && jalanb == 3)
{
cout << "==============" << endl;
cout << "# SERI(DRAW) #" << endl;
cout << "==============" << endl;
}

//MENANG
else if(pilih == 1 && jalanb == 2)
{
cout << "=================" << endl;
cout << "# PLAYER MENANG #" << endl;
cout << "=================" << endl;
}

else if(pilih == 2 && jalanb == 3)
{
cout << "=================" << endl;
cout << "# PLAYER MENANG #" << endl;
cout << "=================" << endl;
}

else if(pilih == 3 && jalanb == 1)
{
cout << "=================" << endl;
cout << "# PLAYER MENANG #" << endl;
cout << "=================" << endl;
}

//KALAH
else if(jalanb == 1 && pilih == 2)
{
cout << "================" << endl;
cout << "# PLAYER KALAH #" << endl;
cout << "================" << endl;
}

else if(jalanb == 2 && pilih == 3)
{
cout << "================" << endl;
cout << "# PLAYER KALAH #" << endl;
cout << "================" << endl;

}

else if(jalanb == 3 && pilih == 1)
{
cout << "================" << endl;
cout << "# PLAYER KALAH #" << endl;
cout << "================" << endl;

}

else {
cout << "TIDAK VALID";
}


cout << endl << endl;


cout << "MAIN LAGI (y/n) = ";
cin >> main;

if (main == "y")
{
goto mainl;
}

else {
cout << "==============================" << endl;
cout << "# TERIMAKASIH SUDAH BERMAIN  #" << endl;
cout << "==============================" << endl;
}
}