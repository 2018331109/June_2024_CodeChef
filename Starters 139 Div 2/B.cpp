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
const int N = 1e6 + 5;
const int INF = 1e18;
int md = 998244353;

vector<int> primes;
vector<int> pre_sum;

void sieve(int max_n)
{
    vector<bool> is_prime(max_n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= max_n; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= max_n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= max_n; i++)
    {
        if (is_prime[i])
        {
            primes.pb(i);
        }
    }
}

void calculate_prefix_sum()
{
    pre_sum.resize(primes.size());
    pre_sum[0] = primes[0];
    for (size_t i = 1; i < primes.size(); i++)
    {
        pre_sum[i] = pre_sum[i - 1] + primes[i];
    }
}

void solve()
{
     int n; cin>>n;
     if(n%2==0)
     {
         cout<<n*2<<endl;
         return;
     }
     int d=0, k=n;
     for(int i=2;i*i<=n;i++){
        if(n%i==0){
            d=i;
            break;
        }
     }
     if(d){
        k=d;
     }
     int ind=upper_bound(primes.begin(), primes.end(), k)-primes.begin();
     cout<<pre_sum[ind-1]*n<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve(1e6); // Calculate primes up to 1,000,000
    calculate_prefix_sum(); // Calculate the prefix sum of primes

    //cout<<primes.size()<<endl;

    int test;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

