#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define ll long long
#define pb emplace_back
#define all(v) (v).begin(),(v).end()
#define what_is(x) cerr << #x << " is " << x << endl;
#define FastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int main ()
{
    FastIO;

    int n;
    cin >> n;

    vector <int> v(n);
    for (auto &i : v) cin >> i;
    if (v[n - 1] % 10 == 0) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}
