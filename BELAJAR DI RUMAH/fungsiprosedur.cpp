#include <iostream>
using namespace std;

void namaawal(){
    string nama ="Arman";
    cout << nama << endl;
}

string namaakhir(){
    string nama = "Fajri";
    string gender = "pria";
    return (nama + " dan dia " + gender);
}
string data(string nama, string kelas){
    return (nama + kelas);
}

int main (){
    namaawal();
    cout<< data("Tri", " XIII") << endl;
    cout << namaakhir();
}
