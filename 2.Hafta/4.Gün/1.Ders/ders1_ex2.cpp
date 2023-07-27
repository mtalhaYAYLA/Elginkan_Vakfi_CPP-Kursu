#include <iostream>

using namespace std;

int kareal(int);

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << kareal(i) << endl;
    }
}

int kareal(int sayi)
{
    return sayi * sayi;
}