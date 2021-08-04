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

    int n;
    cin >> n;

    vector <string> v(n);
    string s;
    for (auto &i : v) cin >> i;
    for (int i = 0; i < n / 2; i++) {
        s.pb(v[i][0]);
    }

    for (int i = n / 2; i < n; i++) {
        s.pb(v[i][v[i].size() - 1]);
    }
    
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i & 1) a += s[i] - '0';
        else b += s[i] - '0';
    }

    int val = abs(a - b);
    if (val == 0 || val % 11 == 0) cout << "OUI" << nl;
    else cout << "NON" << nl;

    return 0;
}
