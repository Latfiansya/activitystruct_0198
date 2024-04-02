// Struct_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future#include <iostream>
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
	for (int i = 0; i < 3; i++)
	{
		cout << endl;
		cout << "\nNIM : " << mhs[i].nim;
		cout << "\nNama : " << mhs[i].nama;
		cout << "\nAlamat";
		cout << "\n\tDesa : " << mhs[i].alamat.desa;
		cout << "\n\tKota : " << mhs[i].alamat.kota;
		cout << "\nUmur : " << mhs[i].umur;
	}
}
