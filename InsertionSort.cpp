#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // prosedure input
    while(true)
    {
        cout << "Masukan Jumlah Data pada Array :"; // Membuat inputan jumlah element Array
        cin >> n; // Memanggil variable inputan n

        if (n <= 20)
        { // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\nArray yang anda masukan maksimal 20 Element.\n"; //Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl; // membuat jarak per baris program
    cout << "=================================" << endl; // Membuat tampilan susunan data element array
    cout << "Masukan Element Array" << endl;
    cout << "=================================" << endl;

    for (int i = 0; i < n; i++) // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data ke-" << (i+1) << ":"; // Memasukan atau menginput nilai data n
        cin >> arr[1]; // Menyimpan nilai data n kedalam array arr
    }
}