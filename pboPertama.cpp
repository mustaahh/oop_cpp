#include <iostream>
using namespace std;

int rmtime, rmtype, rmprice;
string ulang;

int main () {
	do {
		system("cls");
		cout << "Sistem Pemesanan Hotel"<< endl;
		cout << "==============================================================" << endl;
		cout << "|         |    Superior    |     Deluxe     |     Premium    |" << endl;
		cout << "|---------+----------------+----------------+----------------|" << endl;
		cout << "|1-2 Hari |    100.000     |     150.000    |     200.000    |" << endl;
		cout << "|3-4 Hari |     90.000     |     135.000    |     180.000    |" << endl;
		cout << "|> 5 Hari |     80.000     |     120.000    |     160.000    |" << endl;
		cout << "==========+================+================+=================" << endl;
		cout << "Silahkan Memilih Tipe Kamar" << endl;
		cout << "1. Superior" << endl;
		cout << "2. Deluxe" << endl;
		cout << "3. Premium" << endl;
		do {
			cout <<"Tipe kamar yang dipilih : ";
			cin >> rmtype;
		} while ( rmtype < 1 || rmtype > 3 );
		do {
			cout << "Lama Menginap : ";
			cin >> rmtime;
		} while ( rmtime < 1 );
		
		switch ( rmtype ) {
			case 1:
				if ( rmtime >= 1 && rmtime <= 2 ) {
					rmprice = rmtime * 100000;
				} else if ( rmtime >= 3 && rmtime <= 4 ) {
					rmprice = rmtime * 90000;
				} else {
					rmprice = rmtime * 80000;
				}
				break;
			case 2:
				if ( rmtime >= 1 && rmtime <= 2 ) {
					rmprice = rmtime * 150000;
				} else if ( rmtime >= 3 && rmtime <= 4 ) {
					rmprice = rmtime * 135000;
				} else {
					rmprice = rmtime * 120000;
				}
				break;
			case 3:
				if ( rmtime >= 1 && rmtime <=2 ) {
					rmprice = rmtime * 200000;
				} else if ( rmtime >= 3 && rmtime <= 4 ) {
					rmprice = rmtime * 180000;
				} else {
					rmprice = rmtime * 160000;
				}		
		}
		cout << "Total Harga Pemesanan : ";
		cout << rmprice << endl;
		cout << "Apakah Anda Ingin Memesan Lagi (Y/N) ?" << endl;
		cin >> ulang;
	} while ( ulang == "y" || ulang == "Y" );
	
}
