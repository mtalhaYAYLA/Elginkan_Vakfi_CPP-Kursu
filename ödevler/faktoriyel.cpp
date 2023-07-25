#include <iostream>

using namespace std;

int main() {
    int sayi;
    unsigned long long faktoriyel = 1;

    cout << "Faktoriyeli hesaplanacak sayiyi giriniz: ";
    cin >> sayi;

    if (sayi < 0) {
        cout << "Negatif sayilarin faktoriyeli tanimsizdir." << std::endl;
    } else {
        // Faktoriyeli hesaplayalim
        for (int i = 1; i <= sayi; ++i) {
            faktoriyel *= i;
        }
        cout << sayi << " sayisinin faktoriyeli: " << faktoriyel << std::endl;
    }

    return 0;
}
