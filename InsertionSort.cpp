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
    }
}