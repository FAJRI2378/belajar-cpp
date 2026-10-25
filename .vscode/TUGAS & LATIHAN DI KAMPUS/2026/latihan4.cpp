#include <iostream>
using namespace std;

int main (){
    int x[5];
    int max;
    int min;
    for(int i = 0; i < 5; i++){
        cout << "ini bilangan ke ->" << i + 1 << " : ";
        cin >> x[i] ;
    }
    max = x[0];
    min = x[0];
       for(int i = 1; i < 5; i++){
        if(x[i] > max) {
            max = x[i];
        }
        if(x[i] < min) {
            min = x[i];
        }
    }

    cout << "Nilai terbesar : " << max << endl;
    cout << "Nilai Terkecil : " << min << endl;
}