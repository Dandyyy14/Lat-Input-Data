#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <string> nama, npm, tanggalLahir;
	string n, np, tl;
	int pil, h;
	char t;
	bool tes;
	do {
		cout << "=====Menu Data Mahasiswa====\n";
		cout << "1. Input data mahasiswa\n";
		cout << "2. Lihat data mahasiswa\n";
		cout << "3. Hapus data mahasiswa\n";
		cout << "4. Exit\n";
		cout << "Masukan no pilihan (1-4): "; cin >> pil;
		system ("cls");

		switch (pil){
		case 1:
			cin.ignore();
			cout << "Masukan nama mahasiswa: "; getline (cin, n);
			nama.push_back(n);
			cout << "Masukan NPM mahasiswa: "; cin >> np;
			cin.ignore();
			npm.push_back (np);
			cout << "Masukan tanggal lahir mahasiswa: ";  getline (cin, tl);
			tanggalLahir.push_back (tl);
			cout << "\nData telah di tambahkan\n";
			cout << "Kembal ke menu utama? (y/n): "; cin >> t;
			cin.ignore ();
			if (t == 'y' || t == 'Y'){
				tes = true;
			} else if (t == 'n' || t == 'N'){
				tes = false;
			}
			system ("cls");
			break;
		case 2:
			for (int i = 0; i < nama.size (); i++){
				cout << "Data mahasiswa ke-" << i+1 << endl;
				cout << "Nama			: " << nama[i] << endl;
				cout << "NPM			: " << npm[i] << endl;
				cout << "Tanggal Lahir	: " << tanggalLahir[i] << endl;
				cout << endl;
				}
				cout << "\nKembali ke menu utama? (y/n): "; cin >> t;
				if (t == 'y' || t == 'Y'){
					tes = true;
				} else if (t == 'n' || t == 'N'){
					tes = false;
				}
				system ("cls");
				break;
		case 3:
			for (int i = 0; i < nama.size (); i++){
				cout << "Data mahasiswa ke-" << i+1 << endl;
				cout << "Nama			: " << nama[i] << endl;
				cout << "NPM			: " << npm[i] << endl;
				cout << "Tanggal Lahir	: " << tanggalLahir[i] << endl;
				cout << endl;
			}
				cout << "\nData mahasiswa ke berapa yang ingin di hapus? (Masukan angka): "; cin >> h;
				nama.erase(nama.begin() +h-1);
				npm.erase (npm.begin() +h-1);
				tanggalLahir.erase (tanggalLahir.begin() +h-1);

				cout << "\nData mahasiswa ke-" << h << "telah di hapus" << endl;
				cout << "\nKembali ke menu utama? (y/n): "; cin >> t;
				if (t == 'y' || t == 'Y'){
					tes = true;
				} else if (t == 'n' || t == 'N'){
					tes = false;
				}
				system ("cls");
				break;

case 4:
    tes = false;
    break;
default:
    cout<<"\nPilihan yang ada pilih tidak tersedia, Kembali ke menu utama? (y/n): "; cin>>t;
    if (t == 'y' || t == 'Y') {
        tes = true;
    }else if (t == 'n' || t == 'N') {
        tes = false;
    }
    system("cls");
    break;
}
    }while (tes == true);
    cout<<"program selesai";
}
