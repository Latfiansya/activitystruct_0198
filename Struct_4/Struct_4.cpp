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
	string umur;
};

int main()
{
	Mahasiswa mhs[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Data ke-" << (i+1) << ":" << endl;
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
		cin.ignore();
		cout << endl;
	}

	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "\nData Mahasiswa ke-" << (i + 1) << ":" << endl;
		cout << "\nNIM\t: " << mhs[i].nim;
		cout << "\nNama\t: " << mhs[i].nama;
		cout << "\nAlamat";
		cout << "\n\tDesa : " << mhs[i].alamat.desa;
		cout << "\n\tKota : " << mhs[i].alamat.kota;
		cout << "\nUmur\t: " << mhs[i].umur;
	}
}
