//Avoid Local Maximums problem on CodeForces

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
    ll t, tmp, sz,counter;
    cin >> t;
    while(t--){
        counter=0;
        cin >> sz;
        ll arr[sz];
        REP(i, 0, sz){
            cin >> arr[i];
        }
        tmp = 1;
        while(tmp < sz-2){
            if(arr[tmp-1]<arr[tmp] && arr[tmp]>arr[tmp+1]){
                if(arr[tmp]>arr[tmp+2]){
                    arr[tmp+1] = arr[tmp];
                }
                else{
                    arr[tmp+1] = arr[tmp+2];
                }
                counter++;
            }
            tmp++;
        }
        if(arr[tmp-1]<arr[tmp] && arr[tmp]>arr[tmp+1]){
            arr[tmp] = max(arr[tmp+1], arr[tmp-1]);
            counter++;
        }
        cout<< counter << endl;
        FOR(i, arr) cout << i << " ";
        cout << endl;
    }
    return 0;
}
