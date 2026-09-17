#include <iostream>
using namespace std;

int main (){
    long long nim = 12345678910;
    char nama[30] = "Arman Tri Fajri";
    string matakuliah = "Pemrograman Dasar";
    float nilai_partisipasi = 0;
    float nilai_tugas = 0;
    float nilai_quiz = 0;
    float nilai_uts = 0;
    float nilai_projek = 95;
    float nilai_akhir = (0.25 * nilai_partisipasi) + (0.15 * nilai_tugas) + (0.10 * nilai_quiz) + (0.20 * nilai_uts) + (0.30 * nilai_projek);
    string nilai_huruf;
    string nilai_mutu;
    string sebutan_mutu;
    
    if (nilai_akhir >= 81){
        cout << " A" << endl;
        cout << "Mutu = 4.0" << endl;
    }
    else {
        if (nilai_akhir >= 76 ){
            cout << " A-" << endl;
            cout << "3.7" << endl;
            cout << "Sangat Istimewa" << endl;
        }
        else {
            if (nilai_akhir >= 72){
                cout << " B+" << endl;
                cout << "3.3" << endl;
                cout << "Istimewa" << endl;
            }
            else {
                if (nilai_akhir >= 68){
                    cout << " B" << endl;
                    cout << "3.0" << endl;
                    cout << "Lebih dari Baik" << endl;
                }
                else {
                    if (nilai_akhir >= 64){
                        cout << " B-" << endl;
                        cout << "2.7" << endl;
                        cout << "Baik" << endl;
                    }
                    else {
                        if (nilai_akhir >= 60){
                            cout << " C+" << endl;
                            cout << "2.3" << endl;
                            cout << "Cukup Baik" << endl;
                        }
                        else {
                            if (nilai_akhir >= 56){
                                cout << " C" << endl;
                                cout << "2.0" << endl;
                                cout << "Lebih dari Cukup" << endl;
                            }
                            else {
                                if (nilai_akhir >= 41){
                                    cout << " E" << endl;
                                    cout << "1" << endl;
                                    cout << "Kurang" << endl;
                                }
                                else {
                                    cout << " E" << endl;
                                    cout << "0" << endl;
                                    cout << "Gagal" << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
