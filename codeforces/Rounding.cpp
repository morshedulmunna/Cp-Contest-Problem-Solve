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
    //  freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    int lastNumber = n % 10;

    if (lastNumber == 0)
    {
        cout << n << endl;
    }
    else if (lastNumber < 5)
    {
        cout << n - lastNumber << endl;
    }
    else
    {
        cout << n + (10 - lastNumber) << endl;
    }

#ifndef ONLINE_JUDGE
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#endif
    return 0;
}
