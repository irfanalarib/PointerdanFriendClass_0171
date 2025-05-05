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
}