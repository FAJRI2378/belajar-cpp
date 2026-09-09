#include <iostream>
using namespace std;

int main() {
    
    // a) 1 pernyataan dengan 2 operator stream insertion (<<)
    cout << "V W X " << "Y Z\n";

    // b) 1 pernyataan dengan 4 operator stream insertion (<<)
    // ada 4 buah tanda "<<" di dalam satu baris statement ini
    cout << "V W " << "X " << "Y " << "Z\n";

    // c) 2 pernyataan dengan masing-masing 1 operator stream insertion (<<)
    cout << "V W X ";
    cout << "Y Z\n";

    return 0;
}