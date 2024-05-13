#include <iostream>
#include <string>
using namespace std;

class Mahasiswa
{
public:
	int nim;
	string nama;

	Mahasiswa() {
		nim = 0;
		nama = "";
	};
	Mahasiswa(int iNim)
	{
		nim = iNim;
	};
	Mahasiswa(string);
	Mahasiswa(int iNim, string iNama);
	void cetak() {
		cout << "NIM  =" << nim << endl;
		cout << "Nama =" << nama << endl;
		cout << endl;
	}
	Mahasiswa::Mahasiswa(string iNama) {
		nim = 0;
		nama = iNama;
	}

	Mahasiswa::Mahasiswa(int iNim, string iNama)
	{
		nim = iNim;
		nama = iNama;
	};
	int main()
	{
		Mahasiswa mhs1;
		Mahasiswa mhs2(123);
		Mahasiswa mhs3("wahyu agung");
		Mahasiswa mhs4(15,"wahyu");

		mhs1.cetak();

		mhs2.cetak();
		mhs3.cetak();
		mhs4.cetak();
		return 0;
	}

};
