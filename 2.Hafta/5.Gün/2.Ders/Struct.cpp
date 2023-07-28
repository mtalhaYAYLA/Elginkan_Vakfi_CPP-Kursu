#include <iostream>

using namespace std;

typedef struct kutuphane
{
    string kitapAdi;
    string yazarAdi;
    int sayfaSayisi;
    int basimYili;
    int siraNo;
    string yayinEvi;
    string kitapTuru;
    string dil;
    string konu;
    string aciklama;
    string kategori;
    int *a;
}kitap;

int main()
{
    kitap kitap1, kitap2; // kitap1 ve kitap2 adında iki tane kitap struct'ı oluşturduk. kitap ismi yerine istediğimiz ismi verebiliriz.
    //veya kutuphane kitap1, kitap2; şeklinde de tanımlayabiliriz.

    kitap1.kitapAdi = "Beyaz Zambaklar Ülkesinde";
    kitap1.yazarAdi = "Grigory Petrov";
    kitap1.sayfaSayisi = 200;
    kitap1.basimYili = 1923;
    kitap1.siraNo = 1;
    kitap1.yayinEvi = "Yayinevi";
    kitap1.kitapTuru = "Roman";
    kitap1.dil = "Türkçe";
    kitap1.konu = "Sosyalizm";
    kitap1.aciklama = "Beyaz Zambaklar Ülkesinde, Grigory Petrov'un 1923 yilinda yayimlanan, Rusya'da Bolşevik Devrimi'nden sonra yaşanan değişimleri anlatan bir romandir.";
    
    kitap2.kitapAdi = "Beyaz Geceler";
    kitap2.yazarAdi = "Fyodor Dostoyevski";
    kitap2.sayfaSayisi = 200;
    kitap2.basimYili = 1848;
    kitap2.siraNo = 2;
    kitap2.yayinEvi = "Yayinevi";
    kitap2.kitapTuru = "Roman";
    kitap2.dil = "Türkçe";
    kitap2.konu = "Aşk";
    kitap2.aciklama = "Beyaz Geceler, Fyodor Dostoyevski'nin 1848 yilinda yayimlanan, Petersburg'da geçen bir aşk hikâyesidir.";


}