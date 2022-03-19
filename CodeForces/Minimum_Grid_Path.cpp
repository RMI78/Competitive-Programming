//Minimum Grid Path problem on CodeForces

//RMI78
#include <bits/stdc++.h>
#define MOD 1000000007
#define ff first
#define ss second
#define pb push_back
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define all(a) a.begin(), a.end()
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c, d)))
#define max3(a,b,c) max(a,max(b,c))
#define REP(i, a, b) for(int i = a; i < b; i++)
#define FOR(i, a) for(auto & i : a)
#define len(s) (int)s.size()

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
// FAST INPUT
void RMI78(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}

// #ifndef ONLINE_JUDGE
//     freopen("in", "r", stdin);
//     freopen("out", "w", stdout);
// #endif

int main()
{
    RMI78();
    ll t;
    cin >> t;
    while(t--){
        ll n = 0;
        cin >> n;
        ll tmp = 0, min_odd = 1e10, min_even = 1e10, odd = n, even = n, ans = 1e18, arr[n];
        REP(i, 0, n){
            cin >> arr[i];
            tmp+=arr[i];
            if(i%2 == 0){
                if(arr[i]<min_even) min_even = arr[i];
                even--;
            }
            else{
                if(arr[i]<min_odd) min_odd = arr[i];
                odd--;
            }
            ans = min(ans, tmp+min_even*even+min_odd*odd);
        }
    cout << ans << "\n";
    }
    return 0;
}

