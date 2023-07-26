#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    srand(time(NULL));

    char harf[10];
    int diziboyut;

    diziboyut = sizeof(harf) / sizeof(*harf);

    for (int i = 0; i < diziboyut; i++)
    {
        harf[i] = rand() % 26 + 65;
        cout << harf[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < diziboyut; i++)
    {
        for(int j = i; j < diziboyut; j++)
        {
            if(harf[i] > harf[j])
            {
                char temp = harf[i];
                harf[i] = harf[j];
                harf[j] = temp;
            }
        }
    }
    cout << "--- Siralama ---" << endl;
    for (int i = 0; i < diziboyut; i++)
    {
        cout << harf[i] << " ";
    }

    return 0;
}