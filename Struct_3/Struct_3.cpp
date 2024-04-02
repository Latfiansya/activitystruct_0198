#include <iostream>
#include <string>
using namespace std;

struct DetailAlamat
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};

int main()
{
	Mahasiswa mhs[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Nomor Mahasiswa\t: ";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa\t: ";
		getline(cin, mhs[i].nama);

		cout << "Alamat Mahasiswa\n";
		cout << "\tNama Desa : ";
		cin >> mhs[i].alamat.desa;
		cout << "\tNama Kota : ";
		cin >> mhs[i].alamat.kota;

		cout << "Umur Mahasiswa\t: ";
		cin >> mhs[i].umur;
	}
	cout << endl;
	cout << "\nNIM : " << mhs.nim;
	cout << "\nNama : " << mhs.nama;
	cout << "\nAlamat";
	cout << "\n\tDesa : " << mhs.alamat.desa;
	cout << "\n\tKota : " << mhs.alamat.kota;
	cout << "\nUmur : " << mhs.umur;
}