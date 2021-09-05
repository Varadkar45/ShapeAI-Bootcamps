#include<iostream>
using namespace std;
int main ()
{
    int a[10];
    int n,i,j,x;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter the elements of array : ";
    for (i = 0; i < n; i++){
        cin >> a[i];    
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
    cout << "Second largest element in the array is : " << a[1];
    return 0;
}