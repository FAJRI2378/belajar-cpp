#include <iostream>

using namespace std;

//menentukan bilangan buat or ganjil dengan inputan (cin)
int main() {
    int bilangan;
    cout << "Input bilangan bulat: ";
    cin >> bilangan;
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan GENAP." << endl;
    } else {
        cout << bilangan << " adalah bilangan GANJIL." << endl;
    }
    return 0;

}
//menentukan bilangan buat or ganjil tanpa inputan (cin)
int tanpacin (){
    int bilangan = 7; // Contoh bilangan
    if (bilangan % 2 == 0) {
        cout << bilangan << " adalah bilangan GENAP." << endl;
    } else {
        cout << bilangan << " adalah bilangan GANJIL." << endl;
    }
    return 0;
}