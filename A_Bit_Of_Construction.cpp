#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pair<int, int>> vip;

#define w(x)            int x;cin>>x;while(x--)
#define Mostafa         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll              long long
#define pb              push_back
#define ff              first
#define ss              second
#define mp              make_pair
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define ps(x,y)         fixed<<setprecision(y)<<x
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)

int main() {

    Mostafa

    // https://codeforces.com/contest/1957/problem/B

    w(x) {
        int n, k; cin >> n >> k;

        if (n == 1) {
            cout << k << endl;
        } else {

            int val = (1 << __lg(k)) - 1;

            cout << val << " " << k - val;

            for (int i = 2; i < n; ++i) {
                cout << " 0";
            }
            cout << endl;
        }
    }
    return 0;
}