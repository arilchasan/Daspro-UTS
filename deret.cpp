#include <iostream>
using namespace std;

int main() {
    int N, pilihan;
    int sum = 0, maxVal, minVal;
    double rataRata;
    
    cout << "Masukkan jumlah deret (N): ";
    cin >> N;
    cout << "Pilih jenis deret (1 = GENAP, 2 = GANJIL): ";
    cin >> pilihan;

    cout << "Deret yang dicetak: ";
    if (pilihan == 1) {
        // Deret GENAP
        for (int i = 1; i <= N; i++) {
            int bil = 2 * i; 
            cout << bil << " ";
            sum += bil;

            if (i == 1) {
                maxVal = minVal = bil;
            } else {
                if (bil > maxVal) maxVal = bil;
                if (bil < minVal) minVal = bil;
            }
        }
    } else if (pilihan == 2) {
        // Deret GANJIL
        for (int i = 1; i <= N; i++) {
            int bil = 2 * i - 1;  
            cout << bil << " ";
            sum += bil;

           
            if (i == 1) {
                maxVal = minVal = bil;
            } else {
                if (bil > maxVal) maxVal = bil;
                if (bil < minVal) minVal = bil;
            }
        }
    } else {
        cout << "Pilihan tidak valid!" << endl;
        return 1;
    }

    rataRata = static_cast<double>(sum) / N;
    cout << endl;

    // Menampilkan hasil perhitungan
    cout << "Jumlah deret: " << sum << endl;
    cout << "Rata-rata deret: " << rataRata << endl;
    cout << "Bilangan terbesar: " << maxVal << endl;
    cout << "Bilangan terkecil: " << minVal << endl;

    return 0;
}
