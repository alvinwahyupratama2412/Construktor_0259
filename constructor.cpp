#include <iostream>
using namespace std;

class mahasiswa{
    public:
    mahasiswa();//constructor
};

mahasiswa::mahasiswa(){
    cout<< "constructor terpanggil"<<endl; //definisi constructor
}