#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;


class Bensin{
public:
	void pilih();
	void pertalite();
	void pertamax();
private:
	int jenis,liter,harga,uang;
	string nama;
};
void Bensin::pertalite(){
	cout << "Masukkan Jumlah Liter Pertalite : ";
	cin >> liter;
	cout << "Masukkan Nama Pelanggan : ";
	cin >> nama;
	harga = liter*7000;
	cout << "Harga yang harus dibayar : "<<harga<<endl;
	cout << "Uang yang di bayarkan : "; cin>>uang;
	cout << "\n\n=========================\n";
	cout << "\t\tStruk Pembelian\t\t\n";
	cout << "=========================\n\n";
	cout << "Jenis Bensin : Pertalite\n";
	cout << "Nama Pembeli : "<<nama<<endl;
	cout << "Liter yang dibeli : "<<liter<<endl;
	cout << "Kembalian : Rp."<<uang-harga<<endl;
}
void Bensin::pertamax(){
	cout << "Masukkan Jumlah Liter Pertamax : ";
	cin >> liter;
	cout << "Masukkan Nama Pelanggan : ";
	cin >> nama;
	harga = liter*9000;
	cout << "Harga yang harus dibayar : "<<harga<<endl;
	cout << "Uang yang di bayarkan : "; cin>>uang;
	cout << "\n\n=========================\n";
	cout << "\t\tStruk Pembelian\t\t\n";
	cout << "=========================\n\n";
	cout << "Jenis Bensin : Pertamax\n";
	cout << "Nama Pembeli : "<<nama<<endl;
	cout << "Liter yang dibeli : "<<liter<<endl;
	cout << "Kembalian : Rp."<<uang-harga<<endl;
}
void Bensin::pilih(){
	cout << "1. Pertalite"<<endl;
	cout << "2. Pertamax"<<endl;
	cout <<"Pilih Jenis Bensin : "; cin>>jenis;
	switch(jenis){
		case 1 : 
			pertalite();
			break;
		case 2 :
			pertamax();
			break;
		default : cout <<"Pilihan Tidak Tersedia";
	}
}
int main()
{
	Bensin x ;
	x.pilih() ;
	getch();
	
	
}
