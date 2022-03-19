//Reverse and Concatenate Problem on CodeForces

//RMI78
#include <bits/stdc++.h>
#define MOD 1000000007
#define REP(i, a, b) for(int i = a; i < b; i++)
#define FOR(i, a) for(auto & i : a)
#define len(s) (int)s.size()
#define printv(v) for(int fi = 0; fi < v.size(); fi++) cout << v[fi] << " "; cout << endl;

typedef long long ll;
typedef unsigned long long ull;
using namespace std;
// FAST INPUT
void RMI78(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout << setprecision(8) << fixed;
}

string revStr(string str)
{
    string res = str;
    int n = str.length();
    for (int i = 0; i < n / 2; i++){
        swap(res[i], res[n - i - 1]);
    }
    return res;
}


int main()
{
    RMI78();
    ll t=1;
    cin >> t;
    while(t--){
        ll n, k;
        string ipt;
        cin >> n >> k;
        cin >> ipt;
        set<string> s;
        if(k == 0) cout << 1 << "\n";
        else{
            REP(i, 0, k){
                string re = revStr(ipt);
                s.insert(ipt+re);
                s.insert(re+ipt);
            }
            cout << s.size() << "\n";
        }
    }
    return 0;
}
