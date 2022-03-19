//Fortune Telling problem on CodeForces
//RMI78
#include <bits/stdc++.h>
#define MOD 1000000007
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
        ll n, x, y, tmp, ttal = 0;
        cin >> n >> x >> y;
        REP(i, 0, n){
            cin >> tmp;
            ttal+=tmp;
            }
        if((ttal+x+y)%2 == 0){
            cout << "Alice" << "\n";
        }
        else{
            cout << "Bob" << "\n";
        }
    }
    return 0;
}
