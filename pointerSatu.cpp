#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " << nim << endl;
    }
};

int main(){
    mahasiswa mhs; //Object Mhs
    mhs.nim = 5;
    mhs.showNim(); // Member Access Operator

    mahasiswa &refMhs = mhs; // pointer reference pMhs
    refMhs.nim = 2; // member access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; // pointer Dereference pMhs
    pMhs->nim = 3; // Arrow Operator
    pMhs->showNim();
    return 0;
}