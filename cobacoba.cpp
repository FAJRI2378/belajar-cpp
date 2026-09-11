// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int usia;
    int nilai;
    int nim;
    string jurusan;
    string prodi;
    string goals;
    cout <<"Berapa usia anda? : ";
     cin >> usia;   
    cout << "Usia anda ternyata : " << usia << " tahun" ;
    cout << endl;
    cout << "===================\n";
        cout << "masukkan nilai anda : ";
    cin >> nilai;
    cout << endl <<"masukkan nim anda: ";
    cin >> nim;
cout << "===============\n";
    cout << "anda dari jurusan apa ? : ";
        cin >> jurusan;
cout << "===========\n";
    
cout << "anda dari prodi apa? :";
    cin >> prodi;
cout << "============\n";
    
cout<< "cita cita kamu apa? : ";
    cin >> goals;
    cout << "================\n";
    cout << "INI DATA ANDA";
        cout << endl << usia << endl<< nilai << endl << nim <<endl << jurusan << endl << prodi <<endl << goals << endl;
    cout << "=============\n";
        
    if(nilai>=80){
        cout << "nilai anda bagus";
    }else if(nilai >=79){
        cout << "dengan nilai segitu nilai anda perlu di tingkatkan";}
        else {
        cout << "dengan nilai segitu kamu saya do saja";
            }
    
    
    return 0;
}