#include <bits/stdc++.h>
using namespace std;
void encode(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else if (s[i] == 'Z')
        {
            s[i] = 'A';
        }
        else
            s[i] = s[i] + 1;
    }
}
void decode(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a')
        {
            str[i] = 'z';
        }
        else if (str[i] == 'A')
        {
            str[i] = 'Z';
        }
        else
            str[i] = str[i] - 1;
    }
}

void printString(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i];
    }
}
int main()
{

    string s;cin>>s;
    encode(s);
    fstream ob;

    ob.open("test.txt", ios::out);
    ob << s;
    ob.close();

    ob.open("test.txt", ios::in); // again opening the file but in reading mode
    string str;
    while (!ob.eof())

    {

        ob >> str; // reading word by word from file and storing in str

        cout << str << "\n"; // printing str
    }
   
    cout << endl;
    decode(str);
    printString(str);
    return 0;
}