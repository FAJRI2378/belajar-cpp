// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int usia;
    int nilai;
    int nim;
    char jurusan[100];
    char prodi[100];
    char goals[100];
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
        cin.getline(jurusan, 100);
cout << "===========\n";
    
cout << "anda dari prodi apa? :";
    cin.getline(prodi, 100);
cout << "============\n";
    
cout<< "cita cita kamu apa? : ";
    cin.getline(goals, 100);
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