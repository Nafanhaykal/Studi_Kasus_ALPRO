#include <iostream>
#include <new>
using namespace std;

class Data{
  public :
    void input();
    void output();
  private :
    int i=5, n;
    string *nama = new (nothrow) string[i];
    int *nim = new (nothrow) int[i];
};
void Data::input(){
  cout << "=====Masukkan data mahasiswa======"<<endl;
  if(nama == nullptr || nim==nullptr){
    cout << "Kosong";
  }
  else{
    for(n=0;n<i;n++){
      cout << "Mahasiswa ke-"<<n+1<<endl;
      cout << "Masukkan Nama Mahasiswa : "; 
      cin>>nama[n];
      cout << "Masukkan Nim Mahasiswa : ";
      cin >> nim[n];
      cout << endl;
    }
  }
  output();
}

void Data::output(){
  cout << "====Finalis Lomba===="<<endl;
  for(n=0;n<i;n++){
    cout << n+1<< ". " << nim[n]<<"-"<<nama[n]<<endl;
  }
  delete[] nama,nim;
}
int main(){
  Data x;
  x.input();
}