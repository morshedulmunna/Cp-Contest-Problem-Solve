#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    string strings="abcdefghijklmnopqrstuvwxyz";
    string s2="";
    int n,k;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        s2 = s2 + strings[i%k];
    }

    cout<<s2<<endl;





#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
