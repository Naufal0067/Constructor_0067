#include <iostream>
using namespace std;

class mahasiswa
{
public:
    static int nimm;
    int id;
    string nama;

    void setId();

    void printAll();
    mahasiswa(string pnama):nama(pnama)
    {
        setID;
    }
};