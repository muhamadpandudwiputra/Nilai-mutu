#include <iostream>
using namespace std;

char nilaiMutu(int nilai) {
    if (nilai >= 85) {
        return 'A';
    } else if (nilai >= 70) {
        return 'B';
    } else if (nilai >= 55) {
        return 'C';
    } else if (nilai >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}

int main() {
    int nilai;
    cout << "Masukkan nilai Anda: ";
    cin >> nilai;

    char mutu = nilaiMutu(nilai);
    cout << "Nilai mutu Anda adalah: " << mutu << endl;

    return 0;
}

