#include <iostream>

using namespace std;

int main() {
    char operasi;
    double angka1, angka2, hasil;

    cout << "=== KALKULATOR SEDERHANA ===\r\n";
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            cout << "Hasil: " << angka1 << " + " << angka2 << " = " << hasil << "\r\n";
            break;
        case '-':
            hasil = angka1 - angka2;
            cout << "Hasil: " << angka1 << " - " << angka2 << " = " << hasil << "\r\n";
            break;
        case '*':
            hasil = angka1 * angka2;
            cout << "Hasil: " << angka1 << " * " << angka2 << " = " << hasil << "\r\n";
            break;
        case '/':
            if (angka2 != 0) {
                hasil = angka1 / angka2;
                cout << "Hasil: " << angka1 << " / " << angka2 << " = " << hasil << "\r\n";
            } else {
                cout << "Kesalahan: Pembagian dengan angka nol tidak diperbolehkan!\r\n";
            }
            break;
        default:
            cout << "Kesalahan: Operasi tidak valid!\r\n";
            break;
    }

    return 0;
}
