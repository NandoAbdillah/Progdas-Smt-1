#include <iostream>
using namespace std;

int main()
{
     string kategori, subKategori;

     

     cout << "Masukkan kategori yang ingin dicari : ";
     cin >> kategori;


     if(kategori == "Komputer" || kategori == "Sains" || kategori == "Ilmu") {
        subKategori = "000 Komputer,Sains, dan Ilmu:\n\n000 Sains Komputasi\n001 Ilmu\n002 Proses Data\n003 Pemrograman Komputer, Program, dan Data";
     } else if (kategori == "Ensiklopedia" || kategori == "Fakta") {
        subKategori = "010 Ensiklopedia dan Fakta:\n\n010 Ensiklopedia Umum\n011 Ensiklopedia Amerika\n012 Ensiklopedia Jerman\n013 Ensiklopedia Spanyol";

     } else if (kategori == "Berita" || kategori == "Jurnalisme") {
        subKategori = "020 Berita dan Jurnalisme:\n\n020 Jurnalisme\n021 Koran Amerika\n022 Koran British\n023 Koran Eropa\n024 Koran Itali";
     } else {
        subKategori = "Kategori tidak ditemukan";
     }


     cout << subKategori;


    return 0;
}