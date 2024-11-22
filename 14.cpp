#include <iostream>
using namespace std;
int main()
{
    int n, temp, max;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = -1;
    temp = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
        {
            temp = max;
            max = arr[i];
        }
        else
        {
            if (temp < arr[i])
            {
                temp = arr[i];
            }
        }
    }
    cout << temp;
}