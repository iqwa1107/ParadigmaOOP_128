#include <iostream>
#include <vector>
using namespace std;

class Dokter;
class pasien
{
public:
	string nama;
	vector<Dokter*>daftar_dokter;
	pasien(string pNama) :nama(pNama) {
		cout << "pasien\"" << nama << "\"ada\n";
	}
	~pasien() {
		cout << "pasien\"" << nama << "\"tidak ada\n";
	}
	void tambahDokter(Dokter*);
	void cetakDokter();
};


