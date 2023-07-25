#include <iostream>

using namespace std;

int main()   // derece değişimi yapan program;
{
    double fahrenheit;
    double celsius;

    cout << "Enter Fahrenheit Temp rature : "<< endl;
    cin >> fahrenheit;
    
    celsius = (fahrenheit - 32) * 5 / 9;

    cout << fahrenheit << "' Fahrenheit is "<< celsius << "' Celsius" << endl;
}
