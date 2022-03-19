//Min Max Swap problem on CodeForces

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
    ll t;
    cin >> t;
    while(t--){
        vector<pair<ll,ll>> arr;
        int n, tmp;
        cin >> n;
        REP(i, 0, n){
            cin >> tmp;
            arr.pb(MP(tmp, 0));
        }
        REP(i, 0, n){
            cin >> arr[i].S;
        }
        REP(i, 0, n){
            if(arr[i].F>arr[i].S) swap(arr[i].F, arr[i].S);
        }
        int maxF = arr[0].F, maxS = arr[0].S;
        REP(i, 1, n){
            if(arr[i].F>maxF) maxF = arr[i].F;
            if(arr[i].S>maxS) maxS = arr[i].S;
        }
        cout << maxF*maxS << endl;
    }
    return 0;
}
