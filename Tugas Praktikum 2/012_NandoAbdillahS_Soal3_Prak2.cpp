#include <iostream>
using namespace std;

int main()
{
   int n;

   cout << "Masukkan angka :";
   cin >> n;

   if (n < 0 || n > 999)
   {
      cout << "Inputan maksimal 3 digit dan tidak boleh negatif !" << endl;
   }
   else
   {

      int angkaBelakang, angkaTengah, angkaAwal, hasil;

      angkaBelakang = n % 10;

      if (angkaBelakang != 0)
      {
         angkaTengah = n % 100 / 10;

         if (angkaTengah != 0)
         {
            angkaAwal = n % 1000 / 100;

            if (angkaAwal != 0)
            {

               int simpan = angkaBelakang + angkaTengah + angkaAwal;
               hasil = (simpan % 10 ) + (simpan % 100 / 10);
               
            }

            else
            {
               hasil = angkaBelakang + angkaTengah;
            }
         }
         else
         {
            hasil = angkaBelakang;
         }
      }

      cout << hasil;
   }

   return 0;
}