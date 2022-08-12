#include <iostream>
using namespace std;

class employee
{
private:
    int a;
    int b;
    int c;

public:
    int d;
    int e;
    void set(int a1, int b1, int c1);
    void get()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    }
};
void employee::set(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    class employee Brijesh;
    Brijesh.d = 9;
    Brijesh.e = 10;
    Brijesh.set(2, 3, 4);
    Brijesh.get();
    employee john;
    john.d = 9;
    john.e = 34;
    john.set(5, 6, 7);
    john.get();
    return 0;
}