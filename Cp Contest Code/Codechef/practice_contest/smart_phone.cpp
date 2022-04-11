#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long arr[n+1];

    for(long long i=1; i<=n; i++)
    {
        cin>>arr[i];
    }

    sort(arr+1, arr + n+1, greater<long long>());

    long long m = 0;
    for (long long i = 1; i <= n; ++i)
    {

        m= max(arr[i]*i, m);

    }

    cout<<m<<endl;

    return 0;
}