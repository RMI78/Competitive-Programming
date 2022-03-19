//Ticks problem on CodeForces 

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
        ll minStick, n, m;
        cin >> n >> m >> minStick;
        string res = "YES";
        //input
        vector<vector<int>> ipt(n, vector<int>(m, 0));
        REP(j, 0, n){
            string s;
            cin >> s;
            REP(i, 0, m){
                if(s[i] == '*') ipt[j][i] = 1;
            }
        }

        //checking
        for(int i=n-1; i>-1; i--){
            REP(j, 0, m){
                if(ipt[i][j] == 0) continue;
                ll tmpLenStick = 0;
                while(j>tmpLenStick && j+tmpLenStick+1<m && i>tmpLenStick){
                    if(ipt[i-tmpLenStick-1][j-tmpLenStick-1] == 0 || ipt[i-tmpLenStick-1][j+tmpLenStick+1] == 0) break;
                    tmpLenStick++;
                }
                if(tmpLenStick>=minStick){
                    REP(d, 0, tmpLenStick+1){
                        ipt[i-d][j-d] = 2;
                        ipt[i-d][j+d] = 2;
                        }
                    }
            }
        }
        bool noRest = true;
        REP(i, 0, n){
            REP(j, 0, m){
                if(ipt[i][j] == 1) res = "NO";
            }
        }
        cout << res << endl;
    }
    return 0;
}
