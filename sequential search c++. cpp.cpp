#include <iostream>
using namespace std;

int sequential(int arr[],int a ,int b){
    
    for (int i = 0; i < a; i++){
        if(arr[i] == b){
            return i;
        }
    }
    return -1;
}

int main ()
{
    int a;
    cout << "MASUKAN JUMLAH ELEMEN : ";
    cin >> a;
    
    int arr[a];
    
    cout << "MASUKAN ANGKA : "<< endl;
    for (int i = 0; i < a; i ++){
        cin >> arr[i];
    }
do {
    int b;
    cout << "MASUKAN ANGKA YANG DICARI : ";
    cin >> b;
    
    int hasil = sequential (arr, a, b);
    
    if (hasil != -1){
        cout << b << " DITEMUKAN PADA INDEKS KE- " << hasil << endl;
    }
    
    else{
        cout << b << " TIDAK DITEMUKAN DALAM INDEKS" << endl;
    }
    
}while (true);
}