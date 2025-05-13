#include <iostream>
using namespace std;

class persegiPanjang;
class bangunDatar{
  public: 
  int hitungLuas(int l, int p);
  int hitungkeliling(int l, int p);
};

class persegiPanjang{
  public : 
  int panjang,lebar;
    friend int bangunDatar::hitungLuas(int l, int p);
    friend int bangunDatar::hitungkeliling(int l, int p);
};

int bangunDatar::hitungLuas(int l, int p){
    return l*p;
}
int bangunDatar::hitungkeliling(int l, int p){
    return (2*p)+(2*l);
}

int main(){
    bangunDatar bD;
    persegiPanjang pP;
    persegiPanjang &refpP = pP;
    refpP.panjang = 6;
    refpP.lebar = 3;
    cout << "Panjang = " << refpP.panjang << endl;
    cout << "Lebar = " << refpP.lebar << endl;
    cout << "Luasnya = " << bD.hitungLuas(refpP.lebar, refpP.panjang)<<endl;
}