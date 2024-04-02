#include <iostream>
using namespace std;

struct Mahasiswa
{
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa\t: ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa\t: ";
	cin >> mhs.nama;
	cout << "Alamat Mahasiswa: ";
	cin >> mhs.alamat;
	cout << "Umur Mahasiswa\t: ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\nNIM\t: " << mhs.nim;
	cout << "\nNama\t: " << mhs.nama;
	cout << "\nAlamat\t: " << mhs.alamat;
	cout << "\nUmur\t: " << mhs.umur;
}