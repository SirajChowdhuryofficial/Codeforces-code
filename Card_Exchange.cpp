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

    // https://codeforces.com/contest/1966/problem/A

    w(x) {
        int n, k; cin >> n >> k;

        map<int, int> mp;

        for (int i = 0; i < n; ++i) {
            int num; cin >> num;

            mp[num]++;
        }

        bool f = false;

        for (auto i : mp) {

            if (i.second >= k) {
                f = true;
                break;
            }
        }

        if (f) {
            cout << min(n, k - 1) << endl;
        } else {
            cout << n << endl;
        }
    }
    return 0;
}