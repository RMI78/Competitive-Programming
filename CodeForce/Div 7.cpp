//Div 7 problem on CodeForce

//RMI78
#include <bits/stdc++.h>
#define MOD 1000000007
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
    vector<ll> arr;
    ll c = 0;
    while(c*7 < 999){    
        arr.push_back(c*7);
        c++;
    }
    ll t;
    cin >> t;
    while(t--){
        int x, low_bd, high_bd, min, res, mod;
        cin >> x;
        if(x%7 != 0){
            if(x < 10) low_bd = 0, high_bd = 1, mod = 1;
            else if(x>=10 && x<100) low_bd = 2, high_bd = 14, mod = 10;
            else if(x>=100 && x<1000) low_bd = 15, high_bd = arr.size()-1, mod =100;
            res = arr[low_bd];
            min = abs(x-arr[low_bd])%mod;
            REP(i, low_bd, high_bd){
                if(abs(x-arr[i])%mod < min) res = arr[i], min = abs(x-arr[i])%mod; 
            }
            cout << res << "\n";
        }
        else cout << x << "\n";
    }
    return 0;
}
