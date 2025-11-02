#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string masukkan;
    char charUnik[100];   
    int frekuensi[256] = {0}; 
    int jumlahUnik = 0;

    cout << "Masukkan teks: ";
    getline(cin, masukkan);

    
    for (int i = 0; i < masukkan.length(); i++) {
        char c =    masukkan[i];

        if(c != ' ') {
            c = tolower(c);

            bool ditemukan = false;

            for (int j = 0; j < jumlahUnik; j++)
            {
                if(charUnik[j] == c) {
                    frekuensi[j]++;
                    ditemukan = true;
                    break;
                }
            }

            if(!ditemukan) {
                charUnik[jumlahUnik] = c;
                frekuensi[jumlahUnik] = 1;
                jumlahUnik++;

            }
            
        }

    }

    cout << "Frekuensi karakter unik: " << endl;
    for (int i = 0; i < jumlahUnik; i++) {
            cout << charUnik[i] << " muncul " << frekuensi[i]  << " kali " << endl;
    }

    return 0;
}
