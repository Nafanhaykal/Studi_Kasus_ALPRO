#include <iostream>
using namespace std;

struct Student {
    int nim;
    string name;
    string program;
    string tel;
};

class Data{
  public :
    void search();
    void sort();
    void input();
    void outputAscending();
    void outputDescending();
  private :
    int n, i, j, cari, cek;
    Student student[100], temp;
};
void Data::input(){
  cout << "Masukkan Jumlah Mahasiswa : "; cin>>n;
  for(i=0;i<n;i++){
    cout << "Input Data Mahasiswa ke-"<< i+1 <<endl;
    cout << "Masukkan NIM : "; cin >> student[i].nim;
    cin.ignore();
    cout << "Masukkan Nama : "; getline (cin,student[i].name);
    cout << "Masukkan Prodi : "; getline (cin,student[i].program);
    cout << "Masukkan No tlp :"; cin>>student[i].tel;
  }
}

void Data::sort() {
  
  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (student[i].nim < student[j].nim) {
        temp = student[i];
        student[i] = student[j];
        student[j] = temp;
      }
    }
  }
}

void Data::search(){
  cek = 1;
  cout << "\n----Cari Mahasiswa menggunakan NIM----\n";
  cout << "Masukkan Nim Mahasiswa yang dicari : "; cin >> cari;
  for(i=0;i<n;i++){
    if(cari==student[i].nim){
      cek = 0;
      cout << "\n---Hasil Data yang dicari---\n";
      cout << "NIM Mahasiswa : "<< student[i].nim <<endl;
      cout << "Nama Mahasiswa : "<< student[i].name<<endl;
      cout << "Prodi Mahasiswa : "<< student[i].program<<endl;
      cout << "No.Tlp Mahasiswa : "<< student[i].tel <<endl;
    }
  }
  if(cek==1){
    cout << "Data tidak ditemukan\n";
  }
}
void Data::outputAscending() {
  cout << "Urutan NIM secara ascending" << endl;
  cout << "---------------------------" << endl;
  for (i = 0; i < n; i++) {
    cout << student[i].nim <<"\t"<< student[i].name<<"\t"<<student[i].program<<"\t"<<student[i].tel << endl;
  }
}

void Data::outputDescending() {
  cout << "Urutan NIM secara descending" << endl;
  cout << "---------------------------" << endl;
  for (i = n-1 ; i >= 0 ; i--) {
    cout << student[i].nim <<"\t"<< student[i].name<<"\t"<<student[i].program<<"\t"<<student[i].tel << endl;
  }
}

int main() {
    Data s;
    int option;
    bool selecting;
    cout << "\n----Data mahasiswa----\n";
    s.input();
    s.sort();
    selecting = true;
    while (selecting) {
        cout << "\n----Menu----\n";
        cout << "1. Cari data berdasar NIM" << endl;
        cout << "2. Output ascending" << endl;
        cout << "3. Output descending" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi> " << endl;
        cin >> option;
        switch(option) {
            case 1:
            s.search();
            break;
            case 2:
            s.outputAscending();
            break;
            case 3:
            s.outputDescending();
            break;
            case 4:
            selecting = false;
            break;
            default:
            cout << "Opsi tak ditemukan!" << endl;
        }
    }
    return 0;
}
