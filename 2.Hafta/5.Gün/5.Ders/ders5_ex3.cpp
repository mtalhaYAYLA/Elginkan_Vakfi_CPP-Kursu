#include <iostream>

using namespace std;

class test
{
    private:
        int data1;
        float data2;

    public:
        void function1()
        {
            data1 = 2;
            cout << "data1 : " << data1 << endl;
        }
        float function2()
        {
            data2 = 3.14;
            return data2;
        }
};

int main()
{
    test obj1;

    float data;

    data = obj1.function2();
    cout << "data2 : " << data << endl;

    return 0;
}