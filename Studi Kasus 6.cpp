#include <iostream>
using namespace std;

class Nilai{
public :
  void input();
  void proses();
  void output();
private :
  int nilai[100],jml,max,min;
  float average;
  string nama,mk;
};

void Nilai::input() {
  cout << "Program Input Daftar Nilai\n";
  cout << "------------------------------\n";
  cout << "Masukkan Nama Dosen : ";getline(cin,nama);
  cout << "Masukkan Mata Kuliah : ";getline(cin,mk);
  cout << "Jumlah Input Daftar Nilai Mata Kuliah "<<mk<<" : "; cin>>jml;
  for(int i=0;i<jml;i++){
    cout << "Nilai ke-"<<i+1<<" : ";
    cin >> nilai[i];
  }
  proses();
}
void Nilai::proses(){
  max = nilai[0];
  for(int i=0;i<jml;i++){
    if(nilai[i]>max){
      max = nilai[i];
    }
  }
  min = nilai[0];
  for(int i=0;i<jml;i++){
    if(nilai[i]<min){
      min = nilai[i];
    }
  }
  average = 0;
  for(int i=0;i<jml;i++){
    average += nilai[i];
  }
  average = average/jml;
  output();
}

void Nilai::output() {
  cout << "\nProgram Input Daftar Nilai\n";
  cout << "------------------------------\n";
  cout << "Nama Dosen : " << nama << endl;
  cout << "Nama Mata Kuliah : " << mk << endl;
  cout << "Daftar Nilai Mata Kuliah\n";
  for(int i=0;i<jml;i++){
    cout << "Nilai ke-"<<i+1<<" = "<<nilai[i];
    cout << endl;
  }
  cout <<endl;
  cout << "Nilai Minimum : " << min << endl;
  cout << "Nilai Maksimum : " << max << endl;
  cout << "Rata-Rata : " << average << endl;
}

int main() {
  Nilai a;
  a.input();
}
