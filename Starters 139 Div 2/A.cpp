#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define neg cout << -1 << endl
#define pb push_back
#define ss second
#define ff first

const int mod = 1e9 + 7;
const int N = 2e5 + 5;
const int INF = 1e18;
int md = 998244353;


void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++) cout<<i<<" ";
    cout<<endl;
    int mid=(n+1)/2;
    for(int i=mid+1; i<=n; i++) cout<<i<<" ";
    for(int i=1; i<=mid; i++) cout<<i<<" ";
    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

