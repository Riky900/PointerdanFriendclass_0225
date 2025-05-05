#include <iostream>
using namespace std;

class mahasiswa
{
public:
    int nim;
    void showNim()
    {
        cout << "No Induk = " << nim << endl;
    }

};

int main()
{
    mahasiswa mhs; //Objects mhs 
    mhs.nim = 2024;
    mhs.showNim(); //Number access operator

    mahasiswa &refMhs = mhs; //Pointer Reference reffMhs
    refMhs.nim = 2;          //Number access operator
    mhs.showNim();

    mahasiswa *pMhs = &mhs; //pointer Dereference pMhs
    pMhs->nim = 3;          //Arrow Operator 
    pMhs->showNim();
    return 0;
}
