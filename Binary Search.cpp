#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cout << "Which element you want to search: ";
    int element;
    cin >> element;
    int first = 0, last = n;
    int index = -1;
    while (first <= last)
    {
        int mid = (first + last) / 2;
        if (arr[mid] == element)
        {
            index = mid;
            break;
        }
        else if (arr[mid] > element)
            last = mid - 1;
        else
            first = mid + 1;
    }
    if (index == -1)
        cout << "Number is not found !!\n";
    else
        cout << "Number is found at " << index + 1 << " Position!!\n";
}