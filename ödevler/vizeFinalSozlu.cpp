#include <iostream>

using namespace std;

int main() {
    const double SOZLU_ORANI = 0.2;
    const double VIZE_ORANI = 0.4;
    const double FINAL_ORANI = 0.6;

    double sozluNot1, sozluNot2, vizeNot, finalNot;

    // Kullanıcıdan notları alalım
    cout << "1. Sozlu notunu giriniz: ";
    cin >> sozluNot1;

    cout << "2. Sozlu notunu giriniz: ";
    cin >> sozluNot2;

    cout << "Vize notunu giriniz: ";
    cin >> vizeNot;

    cout << "Final notunu giriniz: ";
    cin >> finalNot;

    // Sözlü notların ortalamasını alalım
    double sozluOrtalama = (sozluNot1 + sozluNot2) / 2.0;

    // Vize ve sözlü notlarının ortalamasını alalım
    double vizeSozluOrtalama = (vizeNot + sozluOrtalama) / 2.0;

    // Geçme notunu hesaplayalım
    double gecmeNotu = vizeSozluOrtalama * VIZE_ORANI + finalNot * FINAL_ORANI;

    cout << "Sözlü Ortalama: " << sozluOrtalama << std::endl;
    cout << "Vize-Sözlü Ortalama: " << vizeSozluOrtalama << std::endl;
    cout << "Geçme Notu: " << gecmeNotu << std::endl;

    return 0;
}
