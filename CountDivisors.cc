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

    int l, r, k;
    cin >> l >> r >> k;

    int counter = 0;
    for (int i = l; i <= r; i++) {
        if (i % k == 0) counter++;
    }

    cout << counter << nl;

    return 0;
}
