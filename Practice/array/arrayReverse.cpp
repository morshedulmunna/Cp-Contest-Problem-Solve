#include <bits/stdc++.h>
using namespace std;

#define CAPACITY 100

// array reverse Funtion
void reverseAraay(int arr[], int start, int ends)
{
    while (start < ends)
    {

        int temp = arr[start];
        arr[start] = arr[ends];
        arr[ends] = temp;
        start++;
        ends--;
    }
}

void printArray(int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int n, arra[CAPACITY];

    cout << "Enter Array Size";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arra[i];
    }

    reverseAraay(arra, 0, n - 1);
    printArray(arra, n);

    return 0;
}
