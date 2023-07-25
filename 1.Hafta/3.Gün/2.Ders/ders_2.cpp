#include <iostream>

using namespace std; // eklemiş olsamda aşağıda std:: yaza biliirm hata vermez ama yazmasamda olur;

int main()
{
    // değişken deklerasyonu;

    int a, b;
    int result;

    // işlem;
    a = 5;
    b = 2;
    a += 1;
    result = a - b;

    //conucu ekrana yaz;
    std::cout << result << endl;
    return 0;
}