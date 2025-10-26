#include <iostream>
using namespace std;

int main()
{
    string email, password, firstPassword, secondPassword;

    cout << "Masukkan email: ";
    cin >> email;

    cout << "Masukkan Password : ";
    cin >> password;

    cout << "Masukkan konfirmasi Password pertama :";
    cin >> firstPassword;

    if (password != firstPassword)
    {
        cout << "Konfirmasi Password gagal, Membatalkan pembuatan akun..." << endl;
    }
    else
    {
        cout << "Masukkan konfirmasi Password kedua :";
        cin >> secondPassword;
        
        if (password == firstPassword && password == secondPassword)
        {
            cout << "Password sudah tekonfirmasi 3 kali, Akun berhasil dibuat !" << endl;
        }
        else
        {
            cout << "Konfirmasi Password gagal, Membatalkan pembuatan akun..." << endl;
        }
    }

    return 0;
}