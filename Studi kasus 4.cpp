#include<iostream>

using namespace std;

class Fungsi{
  public :
    int rekursif(int);
    void iteratif(int);
  
  private :
    int n, fn;
    
};

int Fungsi::rekursif(int n){
  if ((n == 0) || (n == 1)) {
    return n;
    }
  else {
    return rekursif(n-1) + rekursif(n-2);
  }
}
void Fungsi::iteratif(int n){
  int a1=0;
  int a2=1;
  for (int i=0;i<=n;i++){
    fn = a1+a2;
    if(i==0){
      cout << a1;
    }
    else if(i==1){
      cout <<","<<a2;
    }
    else{
      cout<<","<<fn;
      a1=a2;
      a2=fn;
    }
  }
}

int main(){
  int n,j=0;
  cout << "Masukkan batas deret bilangan fibonacci : "; cin >> n;
  cout << "Deret Fibonacci dengan rekursif : ";
  Fungsi hasil;
  for(int i=0;i<=n;i++){
  cout << hasil.rekursif(j)<<",";
  j++;
  }
  cout <<endl;
  cout << "Deret Fibonacci dengan iteratif : " ;
  Fungsi x;
  x.iteratif(n);
  return 0;
}