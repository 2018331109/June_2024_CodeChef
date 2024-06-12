#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int N = 1e7+5;
const int INF=1e18;
int M=998244353;
vector<int> primes;

// Sieve of Eratosthenes to find all primes less than or equal to 100000
void sieve()
{
    vector<bool> is_prime(N, true);
    is_prime[0] = is_prime[1] = false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i < N; ++i)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j < N; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i < N; ++i)
    {
        if (is_prime[i])
        {
            primes.pb(i);
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    if (n < 38)
    {
        no;
        return;
    }
    n -= 4;
    for (int i = 0; i < primes.size() - 1; i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            int a = primes[i], b = primes[j];
            int ab = (a * a) + (b * b);
            if (ab > n)
            {
                break;
            }
            if (ab == n)
            {
                yes;
                return;
            }
        }
    }
    no;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    sieve(); // Call the sieve function to fill the primes vector

    int test = 1;
    cin >> test;

    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}

