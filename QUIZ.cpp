//dibuat oleh nakhwah alfiky

#include <iostream>

using namespace std;

int main()
{
int pilih;
char jawaban;
int nilai = 0;
char mainlg;


lagi:

cout << "=========================" << endl;
cout << "1. QUIZ BAHASA INDONESIA " << endl;
cout << "2. QUIZ MATEMATIKA       " << endl;
cout << "3. QUIZ PENGETAHUAN UMUM " << endl;
cout << "=========================" << endl;
cout << "SILAHKAN PILIH : ";
cin >> pilih;

cout <<endl;

switch (pilih)
{

case 1 :

cout << "1. Kalimat utama biasanya terdapat pada tiap ?" << endl;
cout << "a. paragraf" <<endl;
cout << "b. kalimat" <<endl;
cout << "c. kata" <<endl;
cout << "d. huruf" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'a')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}

cout << endl;


cout << "2. Sebuah teks deskripsi mengandung banyak kata yang bersifat ?" << endl;
cout << "a. Tersirat" <<endl;
cout << "b. Majas" <<endl;
cout << "c. Konkret" <<endl;
cout << "d. Transitif" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'c')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}

cout << endl;


cout << "3.Tokoh lawan atau tokoh dalam cerita fiksi yang menentang tokoh utama disebut ?" << endl;
cout << "a. tokoh pendukung" <<endl;
cout << "b. antagonis" <<endl;
cout << "c. tokoh pembantu" <<endl;
cout << "d. protagonis" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'b')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;


cout << "4. Contoh dari konjungsi sebab akibat adalah ?" << endl;
cout << "a. atau" <<endl;
cout << "b. penyebabnya" <<endl;
cout << "c. kemudian" <<endl;
cout << "d. namun" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'b')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;


cout << "5. Manakah di antara kata-kata di bawah ini yang termasuk dalam kategori kata benda abstrak ?" << endl;
cout << "a. kursi" <<endl;
cout << "b. piring" <<endl;
cout << "c. buku" <<endl;
cout << "d. cinta" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'd')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;

cout << "HASIL NILAI KAMU : " << nilai << endl;

if (nilai >= 80)
{
cout << "KAMU LULUS";
}
else
{
cout << "nilai kamu di bawah kkm, tetap semangat";
}

cout << endl << endl;

cout << "MAU MAIN LAGI (y/n) ? ";
cin >> mainlg;

if(mainlg == 'y')
{
goto lagi;
cout << endl;
}
else
{

}


break;


case 2:


cout << "1. 52 x 7 = " << endl;
cout << "a. 267 " <<endl;
cout << "b. 456 " <<endl;
cout << "c. 465 " <<endl;
cout << "d. 364" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'd')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;



cout << "2. 2+4x5:10 = " << endl;
cout << "a. 3" <<endl;
cout << "b. 10" <<endl;
cout << "c. 4" <<endl;
cout << "d. 8" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'c')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;




cout << "3. 312 .... 321" << endl;
cout << "a. =" <<endl;
cout << "b. ×" <<endl;
cout << "c. >" <<endl;
cout << "d. <" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'd')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;


cout << "4. 809-678+765x0 : " << endl;
cout << "a. 131" <<endl;
cout << "b. 842" <<endl;
cout << "c. 0" <<endl;
cout << "d. 191" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'a')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;


cout << "5. (32 + 7) + 20 = " << endl;
cout << "a. 38" <<endl;
cout << "b. 52" <<endl;
cout << "c. 49" <<endl;
cout << "d. 87" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'c')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}



cout << endl;

cout << "HASIL NILAI KAMU : " << nilai << endl;

if (nilai >= 80)
{
cout << "KAMU LULUS";
}
else
{
cout << "nilai kamu di bawah kkm, tetap semangat";
}

cout << endl << endl;

cout << "MAU MAIN LAGI (y/n) ? ";
cin >> mainlg;

if(mainlg == 'y')
{
goto lagi;
cout << endl;
}
else
{
goto keluar;
}


break;


case 3:

cout << "1. Pulau Komodo terletak di provinsi ? " << endl;
cout << "a. bali" <<endl;
cout << "b. ntt" <<endl;
cout << "c. sumatra" <<endl;
cout << "d. ntb" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'b')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}

cout << endl;



cout << "2. Pada tanggal berapakah Hari Lahir Pancasila diperingati ? " << endl;
cout << "a. 1 september" <<endl;
cout << "b. 1 juli" <<endl;
cout << "c. 1 juni" <<endl;
cout << "d. 1 agustus" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'c')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}

cout << endl;


cout << "3. Apa nama mata uang dari negara Thailand ? " << endl;
cout << "a. baht" <<endl;
cout << "b. won" <<endl;
cout << "c. dinar" <<endl;
cout << "d. rupe" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'a')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;


cout << "4. Siapakah penemu mesin uap? " << endl;
cout << "a. thomas alpha edison" <<endl;
cout << "b. nicola tesla" <<endl;
cout << "c. james watt" <<endl;
cout << "d. alexander grahambell" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'c')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}

cout << endl;


cout << "5. Apa julukan terkenal dari negara Korea Selatan ? " << endl;
cout << "a. Negeri Tirai Bambu" <<endl;
cout << "b. Zamrud Khatulistiwa" <<endl;
cout << "c. Negeri Kincir Angin" <<endl;
cout << "d. Negeri Gingseng" <<endl;
cout << "MASUKAN JAWABAN : ";
cin >> jawaban;

if(jawaban == 'd')
{
cout << "JAWABAN BENAR " << endl;
nilai += 20;
}
else {
cout << "JAWABAN SALAH" << endl;
}


cout << endl;

cout << "HASIL NILAI KAMU : " << nilai << endl;

if (nilai >= 80)
{
cout << "KAMU LULUS";
}
else
{
cout << "nilai kamu di bawah kkm, tetap semangat";
}

cout << endl << endl;

cout << "MAU MAIN LAGI (y/n) ? ";
cin >> mainlg;

if(mainlg == 'y')
{
goto lagi;
cout << endl;
}
else
{
goto keluar;
}


break;

}
keluar :
cout << endl << "TERIMAKASIH SUDAH BERMAIN";
}

