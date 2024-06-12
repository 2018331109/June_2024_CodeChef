#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int N = 2e5+5;
const int INF=1e18;
int M=998244353;

void solve()
{
    int n;
    int x, y;
    cin>>x>>y;

    int l=1, r=1000, ans=0;
    while(l<=r)
    {
        int mid=(l+r)>>1;
        int speed=(10*x)+(100*mid);
        speed/=(mid+10);
        //cout<<speed<<endl;
        if(speed >= y)
        {
            ans=mid;
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

