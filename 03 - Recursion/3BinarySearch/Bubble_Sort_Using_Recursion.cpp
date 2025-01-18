#include <bits/stdc++.h>
using namespace std;
void BubbleSort_rec(int a[], int n, int i)
{
    // base case
    if (i == 1)
        return;
    // ek element ko sahi jagah pe me pahucha deta hu
    for (int j = 0; j < i - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    // bakiyo ke liye recursion hai
    BubbleSort_rec(a, n, i - 1);
}

void bs(int a[], int n)
{
    if (n == 0)
    {
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (a[j] > a[j + 1])
        {
            swap(a[j], a[j + 1]);
        }
    }
    bs(a, n - 1);
}
int main()
{
    int arr[] = {4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort_rec(arr, n, n);

    int a[] = {5, 4, 3, 2, 1};
    int nn = sizeof(a) / sizeof(a[0]);
    bs(a, nn - 1);
    for (int i = 0; i < nn; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}