#include <iostream>
using namespace std;

void leftRotateOne(int arr[], int n);
void leftrotate(int arr[], int d, int n)
{
    int i;
    for (i = 0; i < d; i++)
    {
        leftRotateOne(arr, n);
    }
}
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    int i;
    for (i = 0; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}
int main()
{
    int arr[20];
    int n, i, d;
    cout << "enter the total number of elements in the array:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << "enter number of times you want to rotate: ";
    cin >> d;
    leftrotate(arr, d, n);
    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
    }
    return 0;
}