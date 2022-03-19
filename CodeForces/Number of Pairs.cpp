//Number of Pairs problem on CodeForces

//RMI78
#include <bits/stdc++.h>
#define MOD 1000000007
#define F first
#define S second
#define pb push_back
#define MP make_pair
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;
#define all(a) a.begin(), a.end()
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



int main()
{
    RMI78();
    ll t;
    cin >> t;
    while(t--){
        vector<int> arr;
        ll n, l, r, tmp;
        cin >> n >> l >> r;
        REP(i, 0, n){
            cin >> tmp;
            if(tmp<=r) arr.pb(tmp);
        }
        sort(all(arr));
        ll j= 0, i=0, sz = arr.size(), ans=0;
        while(sz--){
            while(i<sz && arr[i]+arr[sz]<l)i++;
            while(j<sz && arr[j]+arr[sz]<=r)j++;
            ans+=abs(min(i, sz)-min(j, sz));
        }
        cout << ans << endl;
    }
    return 0;
}
