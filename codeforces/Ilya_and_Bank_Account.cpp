
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num >= 0)
    {
        cout << num << endl;
    }
    else
    {
        int a = num / 10;
        int b = num / 100 * 10 + num % 10;

        int result = (a>b) ? a : b;

        cout<<result<<endl;
    }

    return 0;
}
