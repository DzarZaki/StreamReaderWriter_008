#include<iostream>
using namespace std;

int main()
{

	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		throw 0.5; // melemparkan sebuh integer maka
		cout << "Pernyataan tidak akan diexsekusi" << endl;
	}
	catch (int a) {
		// blok ini akan dieksekusi
		cout << "Pengecualian akan diexsekusi" << endl;

	}
	catch (...) {
		//*jika selain integer maka blok ini akan diexsekusi
		cout << "default Penggecualian diexsekusi" << endl;
	}

	return 0;
}