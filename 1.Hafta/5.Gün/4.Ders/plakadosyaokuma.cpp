#include <iostream>
#include <fstream>
#include <string>


int main() {
    std::ifstream dosya("plakalardosya.txt");
    std::string il;

    if (!dosya) {
        std::cerr << "Dosya acilamadi." << std::endl;
        return 1;
    }

    int satir_no;
    
    std::cout << "Plaka kodunuz giriniz ? (1-81): ";
    std::cin >> satir_no;

    if (satir_no >= 1 && satir_no <= 81) {
        int satir_sayisi = 1;
        while (std::getline(dosya, il) && satir_sayisi < satir_no) {
            satir_sayisi++;
        }

        std::cout << "(" << satir_no << ". Plaka): " << il << std::endl;
    } else {
        std::cout << "Gecersiz satir numarasi." << std::endl;
    }

    dosya.close();

    return 0;
}
