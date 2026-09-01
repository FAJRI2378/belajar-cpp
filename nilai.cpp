#include <iostream>

using namespace std;

int main(){
    int nilai = 99;

    if ( nilai >= 90) {
        cout << "Nilai A" << endl;
    } else if (nilai >= 80) {
        cout << "Nilai B" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai C" << endl;
    } else if (nilai >= 60) {
        cout << "Nilai D" << endl;
    } else {
        cout << "Nilai E" << endl;
    }

    return 0;
}