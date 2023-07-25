#include <iostream>

using namespace std;

int main() {
    int basariNotu;

    cout << "Basari notunu giriniz: ";
    cin >> basariNotu;

    char harfNotu;

    if (basariNotu >= 90 && basariNotu <= 100) {
        harfNotu = 'A';
    } else if (basariNotu >= 80 && basariNotu < 90) {
        harfNotu = 'B';
    } else if (basariNotu >= 70 && basariNotu < 80) {
        harfNotu = 'C';
    } else if (basariNotu >= 60 && basariNotu < 70) {
        harfNotu = 'D';
    } else if (basariNotu >= 50 && basariNotu < 60) {
        harfNotu = 'E';
    } else {
        harfNotu = 'F'; // Geçerli aralık dışında bir not girilmişse 'F' (Geçersiz) olarak kabul edilir.
    }

    cout << "Harf notu: " << harfNotu << std::endl;

    return 0;
}
