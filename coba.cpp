#include <iostream>

using namespace std;

int tambah(int a, int b) {
    return a + b;
}
int kurang(int a, int b) {
    return a - b;
}
int kali(int a, int b) {
    return a * b;
}

void hasil ( int result){
    cout << "Hasil penjumlahan: " << result << endl;
    cout << "======================" << endl;
}

int main(){
 int pertambahan = tambah (5, 3);
 int pengurangan = kurang (10, 5);
 int perkalian = kali (4, 6);
    cout << hasil << endl;


}