#include <iostream>
using namespace std;
int main (){

        float luas, sisi, panjang, lebar, alas, tinggi, a, b, d1, d2, phi, jari;

//Menghitung Luas Persegi

        cout << "Menghitung Luas Persegi" << endl;

        cout << "Masukkan Sisi = ";
        cin >> sisi;

        luas = sisi * sisi;

        cout << "Luas Persegi adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Persegi Panjang

        cout << "Menghitung Luas Persegi Panjang" << endl;

        cout << "Masukkan Panjang = ";
        cin >> panjang;

        cout << "Masukkan Lebar = ";
        cin >> lebar;

        luas = panjang * lebar;

        cout << "Luas Persegi Panjang adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Segitiga

        cout << "Menghitung Luas Segitiga" << endl;

        cout << "Masukkan Alas = ";
        cin >> alas;

        cout << "Masukkan Tinggi = ";
        cin >> tinggi;

        luas = 0.5 * alas * tinggi;

        cout << "Luas Segitiga adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Trapesium

        cout << "Menghitung Luas Trapesium" << endl;

        cout << "Masukkan a = ";
        cin >> a;

        cout << "Masukkan b = ";
        cin >> b;

        cout << "Masukkan Tinggi = ";
        cin >> tinggi;

        luas = 0.5 * (a + b) * tinggi;

        cout << "Luas Trapesium adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Jajar Genjang

        cout << "Menghitung Luas Jajar Genjang" << endl;

        cout << "Masukkan Alas = ";
        cin >> alas;

        cout << "Masukkan Tinggi = ";
        cin >> tinggi;

        luas = alas * tinggi;

        cout << "Luas Jajar Genjang adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Belah Ketupat

        cout << "Menghitung Luas Belah Ketupat" << endl;

        cout << "Masukkan d1 = ";
        cin >> d1;

        cout << "Masukkan d2 = ";
        cin >> d2;

        luas = 0.5 * d1 * d2;

        cout << "Luas Belah Ketupat adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Layang-Layang

        cout << "Menghitung Luas Layang-Layang" << endl;

        cout << "Masukkan d1 = ";
        cin >> d1;

        cout << "Masukkan d2 = ";
        cin >> d2;

        luas = 0.5 * d1 * d2;

        cout << "Luas Layang-Layang adalah " << luas << endl;

        cout << " " << endl;


//Menghitung Luas Lingkaran

        cout << "Menghitung Luas Lingkaran" << endl;

        cout << "Masukkan phi = ";
        cin >> phi;

        cout << "Masukkan Jari-Jari = ";
        cin >> jari;

        luas = phi * jari * jari;

        cout << "Luas Lingkaran adalah " << luas;
}
