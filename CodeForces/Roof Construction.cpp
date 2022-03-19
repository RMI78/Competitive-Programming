//Roof Construction on CodeForces

#include <bits/stdc++.h>
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
        int ipt, msb_dec, counter = 1;
        cin >> ipt;
        if(ipt == 2) cout << "0 1" << endl;
        else{
            msb_dec = (int)pow(2, (int)log2(ipt-1));

            while(msb_dec-counter>0){
                cout << msb_dec-counter << " ";
                counter++;
            }
            cout << "0 ";
            counter=0;
            while(msb_dec+counter<ipt){
                cout << msb_dec+counter << " ";
                counter++;
            }
            cout << endl;
        }
    }
    return 0;
}
