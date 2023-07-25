#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int j;

    cout << "Bir sayi giriniz = ";
    cin >> i;
    j = 1;

    do
    {
        cout << j <<" ";
    } while (i > j++);
        cout << endl;
    
}