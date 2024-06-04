#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		cout << "Pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		cout << "defult Pengecualian dieksekusi" << endl;
	}
	return 0;
