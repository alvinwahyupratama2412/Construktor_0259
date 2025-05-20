//Buatlah program C++ dengan class barang yang memiliki atribut: namaBarang, kodeBarang
//program meliliki constructor berparameter untuk mengisi nilai namaBarang dan kodeBarang 
//serta memiliki fungsi untuk menampilkan informasi data.


#include <iostream>
using namespace std;

class barang{
    public:
    string namaBarang;
    int kodeBarang;
    barang(string iNamaBarang, int iKodeBarang);
    void cetak();
};

barang::barang(string iNamaBarang, int iKodeBarang){
    kodeBarang = iKodeBarang;
    namaBarang = iNamaBarang;
}

void barang :: cetak(){
    cout << "==========-<[Info Barang]>-============"<< endl;
    cout << "| Nama Barang : "<< namaBarang<<"|"<<endl;
    cout << "| Kode Barang : "<< kodeBarang<<"                     |"<<endl;
    cout << "---------------------------------------"<< endl;
    cout<< endl;
}


int main(){
    barang barang1("Enchanted book smite I", 0001);
    barang barang2("Enchanted book mending", 0002);
    barang barang3("Enchanted book fortune", 0003);
    barang1.cetak();
    barang2.cetak();
    barang3.cetak();
    return 0;
}