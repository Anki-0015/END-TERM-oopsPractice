#include <bits/stdc++.h>
using namespace std;

void cut_sticks(int arr[], int n)
{
    sort(arr, arr + n);
    int remaining = n;
    int i = 0;
    while (remaining > 0)
    {
        cout << remaining << endl;
        int smallest = arr[i];
        while (i < n && arr[i] == smallest)
        {
            ++i;
        }
        remaining = n - i;
    }
}
int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nAfter\n";
    cut_sticks(arr, n);
    return 0;
}