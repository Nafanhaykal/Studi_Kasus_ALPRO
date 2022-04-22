 #include <iostream>
using namespace std;

class Fungsi {
  public :
    void input();
    void proses();
    void output();
    int rekursif(int);
  private :
    string nama, x[20];
    int nim, mk, y[20],sks=0;
    int total, diskon, subtotal=0;
    int harga = 150000;
};

void Fungsi::input() {
  cout << "Masukkan Nama : "; cin >> nama;
  cout << "Masukkan NIM : "; cin >> nim;
  cout << "Banyak Mata Kuliah : "; cin >> mk;
  for (int i = 0; i < mk; i++) {
    cout << "Mata Kuliah " << i + 1 << " : "; cin >> x[i];
    cout << "Jumlah SKS : "; cin >> y[i];
  }
}

int Fungsi::rekursif(int i) {
  if (i == mk) {
    return 0;
  }
  else {
    sks += y[i];
    return rekursif(i+1);
  }
}

void Fungsi::proses() {
  int x = 0;
  rekursif(x);
  subtotal = harga * sks;
  diskon = subtotal * 0.25;
  total = subtotal - diskon;
}

void Fungsi::output(){
  cout << "Nama Mahasiswa : "<<nama<<endl;
  cout << "Nim Mahasiswa : "<<nim<<endl;
  cout << "Mata kuliah yang di ambil : "<<endl;
  for(int i=0;i<mk;i++){
    cout <<i+1 <<". "<<x[i]<<" : "<<y[i]<<" SKS"<<endl;
  }
  cout << "Jumlah SKS : " << sks<<endl;
  cout << "Harga : Rp."<<subtotal<<endl;
  cout << "Diskon :Rp."<<diskon<<endl;
  cout << "Total Bayar : Rp."<<total;
}
int main(){
  Fungsi x;
  x.input();
  x.proses();
  x.output();
  return 0;
}
