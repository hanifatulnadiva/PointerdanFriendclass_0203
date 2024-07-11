#include <iostream>
using namespace std;

class persegiPanjang
{
    public:
        int panjang, lebar;
        int luasPersegiPanjang(int b, int a)
        {
            return a *b;
        }

};

class segitiga
{
    public:
       int tinggi, alas; 
       int luassegitiga(int a, int t)
       {
            return 0.5 * a * t;
       }
       int hitung(persegiPanjang p)
       {
            return p.panjang;
       }
};
int main() {
    persegiPanjang pp;
    segitiga sg;

    cout << "Masukkan panjang: ";
    cin >> pp.panjang;
    cout << "Masukkan lebar: ";
    cin >> pp.lebar;
    cout << "Masukkan tinggi: ";
    cin >> sg.tinggi;
    cout << "Masukkan alas: ";
    cin >> sg.alas;

    cout << "Luas Persegi Panjang: " << pp.luasPersegiPanjang(pp.panjang, pp.lebar) << endl;
    cout << "Luas Segitiga: " << sg.luassegitiga(sg.alas, sg.tinggi) << endl;
}