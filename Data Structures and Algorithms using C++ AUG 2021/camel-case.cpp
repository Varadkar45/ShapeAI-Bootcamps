#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cout << "Enter the String :";
    cin >> s;
    int i, count = 1;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
