#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float gajiPokok, tunjanganIstri = 0, tunjanganAnak = 0, gajiBersih;
    int statusMenikah, jumlahAnak;

    cout << "Masukkan gaji pokok: ";
    cin >> gajiPokok;

    cout << "Apakah karyawan sudah menikah? (1 = Ya, 0 = Tidak): ";
    cin >> statusMenikah;

    if (statusMenikah == 1) {
        tunjanganIstri = 0.10 * gajiPokok;
    }

    cout << "Masukkan jumlah anak (0 jika tidak punya anak): ";
    cin >> jumlahAnak;

    if (jumlahAnak > 2) {
        tunjanganAnak = 0.10 * gajiPokok;  
    } else if (jumlahAnak > 0) {
        tunjanganAnak = 0.05 * gajiPokok;  
    } else {
        tunjanganAnak = 0;  
    }

    gajiBersih = gajiPokok + tunjanganIstri + tunjanganAnak;


    cout << fixed << setprecision(2); 
    cout << "Gaji bersih karyawan adalah: Rp " << gajiBersih << endl;

    return 0;
}

