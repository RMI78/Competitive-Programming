//Sorting Parts Problem on CodeForces
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
        ll l, tmp;
        vector<ll> arr, sortedArray, tmpArray;
        vector<ll>::iterator i,j;
        bool isOkay = false;
        cin >> l;
        REP(i, 0, l){
            cin >> tmp;
            arr.push_back(tmp);
        }
        sortedArray = arr;       
        tmpArray = arr;  
        sort(all(sortedArray));
        if(arr == sortedArray){
            cout << "NO" << endl;
        }
        else if(arr.size() == 2) cout << "YES" << endl;
        else{
            for(i=tmpArray.begin()+1; i<tmpArray.end()-1; i++){
                //cout << *max_element(tmpArray.begin(), i) << *min_element(i, tmpArray.end()) << *i << endl;
                if(*max_element(tmpArray.begin(), i) >= *min_element(i, tmpArray.end())){
                    cout << "YES" << endl;
                    isOkay = true;
                    break;
                }
            }
            if(!isOkay) cout << "NO" << endl;
        }
    }
    return 0;
}
