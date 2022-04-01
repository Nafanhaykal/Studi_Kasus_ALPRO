#include<iostream>
#include<math.h>
using namespace std;

class Warung{
public :
    void pilih();
    void takeaway();
    void delivery();
private :
    int bayar, opsi , i, porsi, harga[20], banyak, menu, total, jumlah, ongkir, jarak, diskon, kembalian;
    string masakan[20];
    
};

void Warung::pilih(){
    cout << "================================\n";
    cout << "Selamat Datang Di Rumah Makan\n";
    cout << "================================\n";
    cout << "List Menu : \n";
    cout << "Makanan\t|\tHarga\n";
    cout << "1. Ayam Geprek\t|\tRp. 21000\n";
    cout << "2. Ayam Goreng\t|\tRp. 17000\n";
    cout << "3. Udang Goreng\t|\tRp. 19000\n";
    cout << "4. Cumi Goreng\t|\tRp. 20000\n";
    cout << "5. Ayam Bakar\t|\tRp. 25000\n";
    cout << "Banyak pesanan : ";
    cin >> banyak;
    
    for(i = 0; i < banyak; i++) {
        cout << "\nPilih Menu Masakan ke " << i+1 << " : ";
        cin >> menu;
        cout << "Jumlah yang dipesan : ";
        cin >> porsi;
        
        if(menu == 1) {
        masakan[i] = "Ayam Geprek";
        harga[i] = porsi*21000;
        }
        else if(menu == 2) {
        masakan[i] = "Ayam Goreng";
        harga[i] = porsi*17000;
        }
        else if (menu == 3) {
        masakan[i] = "Udang Goreng";
        harga[i] = porsi*19000;
        }
        else if(menu == 4) {
        masakan[i] = "Cumi Goreng";
        harga[i] = porsi*20000;
        }
        else if(menu == 5) {
        masakan[i] = "Ayam Bakar";
        harga[i] = porsi*25000;
        }
        else{
            cout << "Tidak Tersedia";
        }
    }
    cout << "\n1. Takeaway\n";
    cout << "2. Delivery Order\n";
    cout << "Pilih opsi : ";
    cin >> opsi;
    switch(opsi) {
        case 1 :
            takeaway();
            break;
        case 2 :
            delivery();
            break;
        default :
            cout << "Opsi tidak tersedia";
    }
}
void Warung::takeaway() {
    cout << "\n===========================\n";
    cout << "\nList Pesanan dan Total Harga : \n";
    
    for(i = 0; i < banyak; i++) {
        cout << i+1 << ". " << masakan[i] << " : Harga = Rp." << harga[i] << "\n";
        total = total+harga[i];
    }
    cout << "\nTotal Harga = Rp." << total << endl;
    cout << "Uang yang di bayarkan = Rp.";
    cin >> bayar;
    kembalian = bayar-total;
    cout << "Kembalian = Rp." << kembalian << endl;
}
void Warung::delivery() {
    cout << "\n===========================\n";
    cout << "\nList Pesanan dan Total Harga : \n";
    
    for(i = 0; i < banyak; i++){
        cout << i+1 << ". " << masakan[i] << " : Harga = Rp." << harga[i] << "\n";
        total = total+harga[i];
    }
    
    cout << "\nDiantar berapa KM = ";
    cin >> jarak;
    if(jarak < 3) {
        ongkir = total + 15000;
        if(total <= 25000) {
            jumlah = ongkir;
            cout << "Total harga = Rp." << jumlah;
        }
        else if((total > 25000) && (total <= 50.000)) {
            jumlah = ongkir - 3000;
            cout << "Total harga = Rp." << jumlah;
        }
        else if((total > 50000) && (total <= 150000)) {
            diskon = (0.15*total);
            jumlah = ongkir - 5000 - diskon;
            cout << "Diskon = Rp." << diskon;
            cout << "\nTotal harga = Rp." << jumlah;
        }
        else if(total > 150000){
            diskon = (0.35*total);
            jumlah = ongkir - 8000 - diskon;
            cout << "Diskon = Rp." << diskon;
            cout << "\nTotal harga = Rp." << jumlah;
        }
        else {
            cout <<"Tidak tersedia\n";
        }
    }
    else {
        ongkir = total + 25000;
        if(total <= 25000) {
            jumlah = ongkir;
            cout << "Total harga = Rp." << jumlah;
        }
        else if((total > 25000) && (total <= 50.000)) {
            jumlah = ongkir - 3000;
            cout << "Total harga = Rp." << jumlah;
        }
        else if((total > 50000) && (total <= 150000)) {
            diskon = (0.15*total);
            jumlah = ongkir - 5000 - diskon;
            cout << "Diskon = Rp." << diskon;
            cout << "\nTotal harga = Rp." << jumlah;
        }
        else if(total > 150000){
            diskon = (0.35*total);
            jumlah = ongkir - 8000 - diskon;
            cout << "Diskon = Rp." << diskon;
            cout << "\nTotal harga = Rp." << jumlah;
        }
        else {
            cout <<"Tidak tersedia\n";
        }
    }
    
    cout << "\nUang yang dibayarkan = Rp.";
    cin >> bayar;
    cout << "Kembalian = Rp." << jumlah-bayar << endl;
}

int main(int argc, const char * argv[]){
    Warung v;
    v.pilih();
    getchar();
}


