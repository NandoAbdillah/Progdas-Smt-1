#include <iostream>
using namespace std;

float  angka1, angka2;
int operasi;

float penjumlahan(float &a, float &b)
{
    return a + b;
}
float pengurangan(float &a, float &b)
{
    return a - b;
}
float perkalian(float &a, float &b)
{
    return a * b;
}
float pembagian(float &a, float &b)
{
    if (b == 0)
    {
        cout << "Error! Tidak dapat dibagi dengan 0" << endl;
        return 0;
    }

    return a / b;
}

void start()
{
    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "Pilih operasi (1/2/3/4): ";

    cin >> operasi;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (operasi)
    {
    case 1:
        cout << "Hasil Penjumlahan : " << penjumlahan(angka1, angka2);
        break;
    case 2:
        cout << "Hasil Pengurangan : " << pengurangan(angka1, angka2);
        break;

    case 3:
        cout << "Hasil Perkalian : " << perkalian(angka1, angka2);
        break;

    default:
        cout << "Hasil Pembagian : " << pembagian(angka1, angka2);
        break;
    }
}

int main()
{
    start();
    return 0;
}