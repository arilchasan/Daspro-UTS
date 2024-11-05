#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan, point = 0;
    double total = 0;
    double totalAkhir = 0;
    int hargaEspresso = 20000;
    int hargaAmericano = 25000;
    int hargaCafeLatte = 22000;
    
    cout << "Menu Kafe Mini Raliane" << endl;
    cout << "1. Espresso - 20000" << endl;
    cout << "2. Americano - 25000" << endl;
    cout << "3. Cafe Latte - 22000" << endl;
    cout << "==============================" << endl;

    while (true) {
        cout << "Masukkan pilihan anda : ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Pilihan anda adalah Espresso" << endl;
            cout << "Harga: " << hargaEspresso << endl;
            total += hargaEspresso;
            point += 2;
        } else if (pilihan == 2) {
            cout << "Pilihan anda adalah Americano" << endl;
            cout << "Harga: " << hargaAmericano << endl;
            total += hargaAmericano;
            point += 2;
        } else if (pilihan == 3) {
            cout << "Pilihan anda adalah Cafe Latte" << endl;
            cout << "Harga: " << hargaCafeLatte << endl;
            total += hargaCafeLatte;
            point += 2;
        } else {
            cout << "Pilihan tidak valid!" << endl;
            continue;
        }

        cout << "Point: " << point << " pt" << endl;
        cout << "Total Bayar: " << total << endl;

        int tambahPesanan;
        cout << "Tambah Pesanan? [1: Ya, 0: Tidak] : ";
        cin >> tambahPesanan;

        if (tambahPesanan == 0) {
            break;
        }
    }

    cout << "==============================" << endl;
    if (point >= 10) {
        
        cout << "Jumlah Point: " << point << " pt" << endl;


        if (point >= 10) {
            int diskon = point * 1000;
            totalAkhir = total - diskon;
            point = 0;  
            cout << "Mendapat Diskon sebesar " << diskon  << endl;
        }
    }

    cout << "Total Bayar: " << total << endl;
    cout << "Total Bayar Akhir: " << totalAkhir << endl;
    cout << "Sisa Point: " << point << " pt" << endl;
    cout << "Terima kasih telah berkunjung" << endl;
    cout << "==============================" << endl;

    return 0;
}
