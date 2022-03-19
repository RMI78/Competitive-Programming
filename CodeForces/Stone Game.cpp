//Stone Game problem on CodeForces
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

// #ifndef ONLINE_JUDGE
//     freopen("in", "r", stdin);
//     freopen("out", "w", stdout);
// #endif



int main()
{
    RMI78();
    ll t=1;
    cin >> t;
    while(t--){
        vector<pair<int, int>> arr;
        int sz, tmp, mid_val, ans=0;
        cin >> sz;
        mid_val = sz/2;
        REP(i, 1, sz+1){
            cin >> tmp;
            arr.pb(make_pair(tmp, i));
        }
        sort(all(arr));
        auto max_val = arr[arr.size()-1];
        auto min_val = arr[0];
        if((max_val.S - min_val.S)<0) swap(max_val, min_val);
        ans+=min(sz-max_val.S+1, min_val.S);
        if(ans == (sz-max_val.S+1)) ans+=min(min_val.S, max_val.S-min_val.S);
        else ans+=min(sz-max_val.S+1, max_val.S-min_val.S);
        cout << ans << endl;

    }
    return 0;
}
