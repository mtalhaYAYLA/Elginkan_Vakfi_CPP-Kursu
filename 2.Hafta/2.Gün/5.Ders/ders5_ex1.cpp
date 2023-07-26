#include <iostream>


using namespace std;

int main()
{
    // 1 - 100 arasında rasgele üretilen 10 adet tam sayıyı diziye atarak bunları ekranda gösteren program
    int dizi[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        dizi[i] = rand() % 100 + 1;
        cout << dizi[i] << " ";
    }
    cout << endl;
    return 0;
}

