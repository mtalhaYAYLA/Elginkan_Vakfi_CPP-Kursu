#include <iostream>

using namespace std;

int main()
{
    //klavyeden girilen vize notuna göre harf notu hesaplayan program %60 final %40 vize
    // 0-39 ff 40-49 dd 50-59 cc 60-69 bb 70-100 aa

    int vize, final, ortalama;

    cout << "vize notunu giriniz" << endl;
    cin >> vize;

    cout << "final notunu giriniz" << endl;
    cin >> final;

    ortalama = (vize * 0.4) + (final * 0.6);

}