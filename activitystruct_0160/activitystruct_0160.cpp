
#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string alamat;
    int umur;
};

int main() {
    mahasiswa mhs;
    cout << "nomor Mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa : ";
    cin >> mhs.nama;
    cout << "alamat mahasiswa : ";
    cin >> mhs.alamat;
    cout << "Umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nim : " << mhs.nim;
    cout << "\n Nama : " << mhs.nama;
    cout << "\n alamat : " << mhs.alamat;
    cout << "\n Umur : " << mhs.umur;
}

#include <iostream>
using namespace std;

struct DetailAlamat {
    string desa;
    string kota;
};

struct mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};

int main() {
    mahasiswa mhs;
    cout << "nomor mahasiswa : ";
    cin >> mhs.nim;
    cout << "Nama mahasiswa : ";
    cin >> mhs.nama;

    cout << "alamat mahasiswa : ";
    cout << "\n nama desa : ";
    cin >> mhs.alamat.desa;
    cout << "\n Nama kota : ";
    cin >> mhs.alamat.kota;

    cout << "Umur mahasiswa : ";
    cin >> mhs.umur;

    cout << endl;
    cout << "\n Nim :" << mhs.nim;
    cout << "\n nama :" << mhs.nama;
    cout << "\n Alamat : ";
    cout << "\n Desa :" << mhs.alamat.desa;
    cout << "\n Kota :" << mhs.alamat.kota;
    cout << "\n Umur :" << mhs.umur;
}