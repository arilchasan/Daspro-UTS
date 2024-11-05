#include <iostream>
#include <string>  
using namespace std;

int main() {
    int angka, jumlah = 0, count = 0;
    double rataRata;
    string pilihan;

    cout << "Program TEBAK ANGKA" << endl;

    while (true) {
        cout << "Masukkan angka: ";
        cin >> angka;
        
        jumlah += angka;
        count++;

        cout << "Apakah ingin berhenti? (Y/N): ";
        cin >> pilihan;

        if (pilihan == "N" || pilihan == "n") {
            break;
        }
    }

    if (count > 0) {
        rataRata = static_cast<double>(jumlah) / count;
        cout << "\nJumlah dari angka-angka yang diinput: " << jumlah << endl;
        cout << "Rata-rata dari angka-angka yang diinput: " << rataRata << endl;
    } else {
        cout << "Tidak ada angka yang diinput." << endl;
    }

    return 0;
}
