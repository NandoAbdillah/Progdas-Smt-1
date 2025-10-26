#include <iostream>
#include <string>
// #include <iomanip>Nan
using namespace std;

int main() {
    
   double bobot_tugas = 0.30,
         bobot_uts = 0.30,
         bobot_uas = 0.40;

   string nama;

   double nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;

   cout << "Masukkan Nama : ";
   cin >> nama;
   cout << "Masukkan Nilai Tugas : ";
   cin >> nilai_tugas;
   cout << "Masukkan nilai UTS : ";
   cin >> nilai_uts;
   cout << "Masukkan nilai UAS : ";
   cin >> nilai_uas;


   nilai_akhir = (nilai_tugas * bobot_tugas) + (nilai_uts * bobot_uts) + (nilai_uas *  bobot_uas);


//     cout << fixed << setprecision(2) ;
   cout << "Nilai akhir dari " << nama << " adalah " << nilai_akhir << endl;





    return 0;
}