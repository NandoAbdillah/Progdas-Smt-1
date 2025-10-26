#include <iostream>
using namespace std;

int main()
{

    int tahun_lahir, tahun_sekarang;

    cout << "Masukkan tahun lahir Anda : ";
    cin >> tahun_lahir;

    cout << endl;

    cout << "Masukkan tahun sekarang : ";
    cin >> tahun_sekarang;

    cout << "Jika anda lahir pada tahun " << tahun_lahir << " dan sekarang tahun " << tahun_sekarang << " maka umur anda adalah " << tahun_sekarang - tahun_lahir << " tahun" << endl;

    return 0;
}