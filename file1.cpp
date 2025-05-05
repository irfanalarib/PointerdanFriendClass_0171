#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNama(){
        cout << "namanya adalah " << nama << endl;
    }
};

class staf{
    public:
    int nidn;
};

int main(){
    Dosen ds;
    ds.nama = "giga";
    ds.tampilNama(); 

    Dosen &dsref = ds;
    dsref.nama = "joko";
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilNama();

    Dosen *pds = &ds;
    pds-> nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds-> tampilNama();

    int a = 5;
    int b = 3;
    int *c = &a;
    *c = 9;
    cout << endl;
    cout << a << endl;

    cout << "alamt memori a = " << &a << endl;
    cout << "alamt memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
    c = &b;
    cout << "alamt memori c = " << c << endl;
    cout << "cetak c = " << *c << endl;
}