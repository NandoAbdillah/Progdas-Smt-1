#include <iostream>
#include <string>
using namespace std;

int mulai = true;

string tambahkanPad(int num)
{
    if (num < 10)
    {
        return "0" + to_string(num);
    }
    else
    {
        return to_string(num);
    }
}
struct Waktu
{
    int jam;
    int menit;
    int detik;
};

Waktu konversiWaktu(string waktuStr)
{
    Waktu waktu;
    waktu.jam = stoi(waktuStr.substr(0, 2));
    waktu.menit = stoi(waktuStr.substr(3, 2));
    waktu.detik = stoi(waktuStr.substr(6, 2));

    return waktu;
}

string formatWaktu(int totalDetik)
{
    int jam = totalDetik / 3600;
    int menit = (totalDetik % 3600) / 60;
    int detik = totalDetik % 60;

    return tambahkanPad(jam) + ":" + tambahkanPad(menit) + ":" + tambahkanPad(detik);
}

int waktuKeDetik(int jam, int menit, int detik)
{
    return (jam * 3600) + (menit * 60) + detik;
}

string tambahWaktu(string waktu1, string waktu2)
{
    Waktu w1 = konversiWaktu(waktu1);
    Waktu w2 = konversiWaktu(waktu2);
    return formatWaktu(waktuKeDetik(w1.jam, w1.menit, w1.detik) + waktuKeDetik(w2.jam, w2.menit, w2.detik));
}

string bandingkanWaktu(string waktu1, string waktu2)
{
    Waktu w1 = konversiWaktu(waktu1);
    Waktu w2 = konversiWaktu(waktu2);

    if (waktuKeDetik(w1.jam, w1.menit, w1.detik) > waktuKeDetik(w2.jam, w2.menit, w2.detik))
    {
        return "Waktu pertama lebih lama";
    }
    else if (waktuKeDetik(w1.jam, w1.menit, w1.detik) < waktuKeDetik(w2.jam, w2.menit, w2.detik))
    {
        return "Waktu kedua lebih lama";
    }
    else
    {
        return "Kedua waktu sama lama";
    }
}

string hitungSelisih(string waktu1, string waktu2)
{
    Waktu w1 = konversiWaktu(waktu1);
    Waktu w2 = konversiWaktu(waktu2);

    int selisihDetik = abs(waktuKeDetik(w1.jam, w1.menit, w1.detik) - waktuKeDetik(w2.jam, w2.menit, w2.detik));
    return formatWaktu(selisihDetik);
}

void voidTampilkanMenu()
{

    int pilihMenu;
    int inputInt;
    string waktu1, waktu2;
    string inputStr;

    cout << "SISTEM MANAJEMEN DURASI VIDEO" << endl;
    cout << "==============================" << endl;
    cout << "1. Detik -> Format Waktu " << endl;
    cout << "2. Format Waktu -> Detik " << endl;
    cout << "3. Tambah Durasi" << endl;
    cout << "4. Bandingkan Durasi" << endl;
    cout << "5. Selisih Drasi" << endl;
    cout << "6. Keluar" << endl;

    cout << "Pilih menu (1/2/3/4/5/6): ";
    cin >> pilihMenu;

    switch (pilihMenu)
    {
    case 1:
    {
        cout << "Masukkan total detik : ";
        cin >> inputInt;
        cout << "Hasil : " << formatWaktu(inputInt) << endl;
    }
    break;

    case 2:
    {
        cout << "Masukkan format waktu (jj:mm:dd) : ";
        cin >> inputStr;
        Waktu waktu = konversiWaktu(inputStr);
        cout << "Hasil : " << waktuKeDetik(waktu.jam, waktu.menit, waktu.detik) << endl;
    }
    break;

    case 3:

    {
        cout << "Masukkan waktu pertama (jj:mm:dd): ";
        cin >> waktu1;
        cout << "Masukkan waktu kedua (jj:mm:dd): ";
        cin >> waktu2;
        cout << "Hasil Penjumlahan : " << tambahWaktu(waktu1, waktu2) << endl;
    }
    break;

    case 4:
    {
        cout << "Masukkan waktu pertama (jj:mm:dd): ";
        cin >> waktu1;
        cout << "Masukkan waktu kedua (jj:mm:dd): ";
        cin >> waktu2;
        cout << "Hasil : " << bandingkanWaktu(waktu1, waktu2) << endl;
    }
    break;

    case 5:
    {
        cout << "Masukkan waktu pertama (jj:mm:dd): ";
        cin >> waktu1;
        cout << "Masukkan waktu kedua (jj:mm:dd): ";
        cin >> waktu2;
        cout << "Hasil Selisih : " << hitungSelisih(waktu1, waktu2) << endl;
    }
    break;

    default:
        mulai = false;
        break;
    }
}

int main()
{
    while (mulai)
    {
        voidTampilkanMenu();
        cout << endl;
    }

    return 0;
}