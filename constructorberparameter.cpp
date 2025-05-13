#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
    public:
    mahasiswa(int nim, string nama); // constructor dengan parameter
};

//definisi constructor ddengan parameter
mahasiswa::mahasiswa(int nim, string nama){
    cout << "constructor dengan parameter terpanggil "<< endl;
    cout << "Nim   : "<< nim<< endl;
    cout << "Nama  : "<< nama<< endl;
}

int main(){
    mahasiswa mhs(12345, "Abra");
    return 0;
}