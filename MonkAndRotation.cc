#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        vector <int> v(n), v1(n);
        for (auto &i : v) cin >> i;
        if (k == n) {
            for (auto i : v) cout << i << " ";
            cout << nl;
        }
        else if (k > n) {
            k = k % n;
            for (int i = 0; i < n; i++) {
                v1[(i + k) % n] = v[i];
            }
            for (auto i : v1) cout << i << " ";
            cout << nl;
        }
        else {
            for (int i = 0; i < n; i++) {
                v1[(i + k) % n] = v[i];
            }
            for (auto i : v1) cout << i << " ";
            cout << nl;
        }

    }

    return 0;
}
