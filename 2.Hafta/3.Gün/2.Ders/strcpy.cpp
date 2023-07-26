#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    char src[] = "Bu bir denemedir.";
    char dest[20];

    strcpy(dest, src);

    cout << "dest: " << dest << endl;

}