#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int(9);
    cout << *a << endl;
    int *b = new int[1];
    *b = 6;
    cout << *b << endl;
    char *c = new char[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> *(c + i);
    }
    for (int i = 0; i < 6; i++)
    {
        cout << *(c + i) << endl;
    }
}
