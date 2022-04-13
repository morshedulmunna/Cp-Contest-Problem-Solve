
#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    int t;
    cin>>t;

    for (int tt = 0; tt < t; tt++)
    {
        int i, n;
        cin>>n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            arr[i]= i+1;
        }
        if(n%2==0)
        {
            for (i=0; i<n; i+=2)
            {
                swap(arr[i], arr[i+1]);
            }
        }
        else
        {
            for(i=0; i<n-1; i+=2)
            {
                swap(arr[i], arr[i+1]);
            }
            swap(arr[n-2], arr[n-1]);
        }
        for(i=0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
