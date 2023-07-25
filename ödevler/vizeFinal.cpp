#include <iostream>

using namespace std;

int main() {
    const double VIZE_ORANI = 0.4;
    const double FINAL_ORANI = 0.6;
    const double GECME_NOTU = 65.0;

    double vizeNotu, finalNotu;

    cout << "Vize notunu giriniz: ";
    cin >> vizeNotu;

    // Final notunu hesaplayalım
    // (Geçme Notu - Vize Notu * Vize Oranı) / Final Oranı
    finalNotu = (GECME_NOTU - vizeNotu * VIZE_ORANI) / FINAL_ORANI;

    if (finalNotu > 100.0) {
        cout << "Finalden 100 almaniz gerekmektedir. Maalesef bu mümkün değil." << std::endl;
    } else if (finalNotu >= 0.0) {
        cout << "Finalden en az " << finalNotu << " almaniz gerekmektedir." << std::endl;
    } else {
        cout << "Geçme notuna ulasmak icin final sınavına girmenize gerek yoktur." << std::endl;
    }

    return 0;
}
