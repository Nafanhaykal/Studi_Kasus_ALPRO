#include <iostream>
using namespace std;

class Buku{
public :
  void input();
  void sort();
  void konversi();
  void output();
private :
  int temp,i,j,jumlah, rak;
  int buku1[50],buku2[10][10];
};
void Buku::input(){
  cout << "-------------------------"<<endl;
  cout << "Masukkan Jumlah Buku : "; cin >> jumlah;
  cout << "Masukkan Jumlah Rak : "; cin >> rak;
  cout << "Masukkan no.buku : " << endl;
  for(i=0;i<jumlah;i++){
    cout << "No.buku ke-"<<i+1<<" : ";
    cin >> buku1[i];
  }
  sort();
}
void Buku::sort(){
  for (i = 0; i < jumlah; i++){
    for (j = 0; j < jumlah - i - 1; j++){
      if (buku1[j] > buku1[j + 1]){
        temp = buku1[j];
        buku1[j] = buku1[j + 1];
        buku1[j + 1] = temp;
        }
    }
  }
  konversi();
}
void Buku::konversi(){
  int k=0;
  for(i=0;i<rak;i++){
    for(j=0;j<(jumlah/rak);j++){
      buku2[i][j] = buku1[k];
      k++;
    }
  }
  output();ry
}
void Buku::output(){
  cout << "----------------------" << endl;
  cout << "\tHasil Output"<<endl;
  cout << "-----------------------" << endl;
  for(i=0;i<rak;i++){
    cout << "\nIsi rak ke-"<<i+1<<" : "<<endl;
    for(j=0;j<(jumlah/rak);j++){
      cout << "Buku no."<<buku2[i][j];
      cout << endl;
    }
  }
}
int main() {
  Buku x;
  x.input();
  return 0;
}
