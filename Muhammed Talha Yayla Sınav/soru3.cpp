#include <iostream>

using namespace std;

int main()
{
    //çarpım tablosunu ekrana yazdıran program
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++) //j = j + 1 yerine j++ yazılabilir
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}