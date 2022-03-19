//GCD Arrays problem on CodeForce

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
        int l, r, k;
        cin >> l >> r >> k;
        if(r == 1 && r == l) cout << "NO" << endl;
        else if(r == l) cout << "YES" << endl;
        else{
        if((r-l+1)-(r/2-(l-1)/2)<=k) cout << "YES" << endl;
        else cout << "NO" << endl;
        }
    }
    return 0;
}
