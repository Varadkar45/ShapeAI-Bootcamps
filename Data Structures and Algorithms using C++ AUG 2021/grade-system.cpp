#include <iostream>
using namespace std;

int main()
{
    int n, i, x;
    int a[10];
    cout << "enter the total number of records :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "ENTER " << i + 1 << " marks  ";
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        x = (a[i] + 4) / 5;
        x *= 5;
        if (x >= 40 && x - a[i] < 3)
            a[i] = x;
        cout << i + 1 << " marks is " << a[i] << endl;
    }
    return 0;
}