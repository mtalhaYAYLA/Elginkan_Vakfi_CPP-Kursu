#include <iostream>

using namespace std;

int main()
{
    //1 den 1000 e kadar olan sayıların içerisinde 5 e tam bölünen aynı zamanda 7 ye tam bölünemeyen sayıları sayan toplamlarını hesaplayan ve
    // bu sayıları listeleyen programı yazınız.

    int sum = 0, counter = 0;
    int number[1000];
    int j = 0;

    for (int i = 1; i <= 1000; i++)
    {
        if (i % 5 == 0 && i % 7 != 0)
        {
            number[j] = i;

            sum += i;
            counter++;
            j++;
        }
    }

    cout << endl<<"-------------------" << endl;
    cout << "5 e tam bolunen 7 ye bolunmeyen sayilar: ";
    for (int i = 0; i < j; i++)
    {
        cout << number[i] << " ";
    }
    cout << endl<<"-------------------" << endl;
    cout << "Toplam: " << sum << endl;
    cout << "Sayi adedi: " << counter << endl;

    return 0;
}