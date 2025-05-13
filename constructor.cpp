#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa();//constructor
};

mahasiswa::mahasiswa(){
    cout<< "constructor terpanggil"<<endl; //definisi constructor
}

int main(){
    mahasiswa mhs;//pembuatan objek
    return 0;
}