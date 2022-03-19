//Minority problem on CodeForces

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
        string ipt;
        cin >> ipt;
        if(ipt.size() == 2) cout << 0 << "\n";
        else{
            ll arr[2] = {0,0};
            REP(i, 0, ipt.size()) arr[ipt[i]-'0']++;
            if(arr[0] == arr[1]) cout << arr[0]-1 << "\n";
            else cout << min(arr[0], arr[1]) << "\n";
        }
    }
    return 0;
}
