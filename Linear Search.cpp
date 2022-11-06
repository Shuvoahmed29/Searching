#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter Number of elements: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter Array Element: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Which elements you want to search: ";
    int element;
    cin >> element;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            index = 1;
            break;
        }
    }
    if (index != -1)
    {
        cout << "The number is found at " << index << " Position!\n";
    }
    else
        cout << "The number is not found!\n";
}