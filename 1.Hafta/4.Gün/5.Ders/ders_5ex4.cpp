#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << setw(40) << "merhaba programcılar" << endl; // 40 karakterlik alan ayırır ve sağa dayalı yazar
    cout << setw(9) << "merhaba" << endl; // 9 karakterlik alan ayırır ve sağa dayalı yazar

    cout << "tc kimlik no";
    cout << setfill('*') << setw(20) << "12345678910" << endl; // 20 karakterlik alan ayırır ve sağa dayalı yazar
    cout << setfill(' '); // setfill ile doldurma karakterini değiştirebiliriz
    cout << setw(20) << "12345678910" << endl; // 20 karakterlik alan ayırır ve sağa dayalı yazar
    

}