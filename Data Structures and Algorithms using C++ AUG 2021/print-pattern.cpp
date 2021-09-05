#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cout << "Enter number of rows: ";
cin >> n;
for(i = 1; i <= n; i++)
{
for(s = i; s < n; s++)
cout << " ";
for(j = 1; j <= i; j++)
cout << "* ";
cout << "\n";
}
return 0;
}