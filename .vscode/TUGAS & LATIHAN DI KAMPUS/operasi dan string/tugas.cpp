#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void inputTeks(string &teks){
    cout << "Nama Lengkap : ";
    getline(cin, teks);
}
void tampilkanPanjang(string teks){
    cout << "panjang Teks : " << teks.length() << endl;

}

int carikata(string teks, string kata){
   size_t posisi = teks.find(kata);
    if (po sisi != string::npos){
        cout << "Kata '" << kata << "' ditemukan pada posisi indeks ke : " << posisi << endl;
        return posisi;
    } else {
        cout << "Kata '" << kata << "' tidak ditemukan" << endl;
        return -1;
    }
}

int hitungkata(string teks, string kata){
    int jumlah = 0;
    size_t posisi = teks.find(kata);
    while (posisi != string::npos){
            jumlah++;
            posisi = teks.find(kata, posisi + kata.length());
        }
        cout << "Jumlah kata '" << kata << "' dalam teks : " << jumlah << endl;
        return jumlah;
}
void gantiKata(string &teks, string kataLama, string kataBaru){
    size_t posisi = teks.find(kataLama);
    
    if (posisi != string::npos){
        teks.replace(posisi, kataLama.length(), kataBaru);
        cout << "Berhasil! Teks sekarang menjadi : " << teks << endl;
    } else {
        cout << "Kata '" << kataLama << "' tidak ditemukan untuk diganti." << endl;
    }
}

int hitungVokal(string teks){
    int jumlah = 0;
    for (int i = 0; i < teks.length(); i++) {
        char c = tolower(teks[i]);
        if (c == 'a'||c == 'i'||c == 'u' || c == 'e' || c == 'o') {
            jumlah++;
        }
    }
    cout << "Jumlah huruf vokal dalam teks : " << jumlah << endl;
    return jumlah;
}

int main (){
   string teks;

   inputTeks(teks);
   tampilkanPanjang(teks);
   int jumlahVokal = hitungVokal(teks);
   string kataDicari = "PNJ";
   int posisi = carikata(teks, kataDicari);
   int banyakKata = hitungkata(teks, kataDicari); 
   jumlahVokal = hitungVokal(teks);
   gantiKata(teks, "PNJ", "Politeknik Negeri Jakarta");
        
    return 0;
}