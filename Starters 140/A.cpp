#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
     int a[n+1];
     map<int, int>mp;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         mp[a[i]]++;
     }
     //sort(a+1, a+n+1);
     int cnt=0;
     for(int i=1;i<=n;i++)
     {
         if(mp[i]==0 and cnt==0){
            no;
            return;
         }
         cnt+=mp[i];
         cnt-=1;
     }
     yes;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test=1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

