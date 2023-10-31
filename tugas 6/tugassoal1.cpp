#include <iostream>
using namespace std;

//fungsi konversi meter ke centimeter
float meterKeCm(float meter){
    float cm = meter*100;
    return cm;
}

//fungsi konversi centimeter ke meter
float cmKeMeter(float cm){
    float meter = cm/100;
    return meter;
}

int main(){
    float panjangPita = 12; //panjang pita dalam meter
    float panjangIkatan = 0.45; //panjang setiap ikatan bunga rangkai dalam meter

    //hitung berapa ikatan bunga rangkai yang dapat dibuat
    int jumlahIkatan = panjangPita / panjangIkatan;

    //hitung panjang sisa pita yang belum dipakai
    float sisaPita = panjangPita - (jumlahIkatan * panjangIkatan);

    //cetak hasil
    cout<<"Jumlah Ikatan Bunga Rangkai: "<<jumlahIkatan<<endl;
    cout<<"Sisa Pita yang Belum Dipakai: "<<meterKeCm(sisaPita)<<" cm"<<endl;

    //contoh penggunaan fungsi konversi
    float meter = 2.5;
    float cm = 120;

    cout<<meter<<" meter = "<<meterKeCm(meter)<<" cm"<<endl;
    cout<<cm<<" cm = "<<cmKeMeter(cm)<<" meter"<<endl;

    return 0;
}