#include <iostream>
using namespace std;

class Dosen{
    public:
    string nama;
    void tampilNma(){
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
    ds.tampilNma(); 
}