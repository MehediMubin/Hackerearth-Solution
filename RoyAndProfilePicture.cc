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

    int l, n;
    cin >> l >> n;
    while (n--) {
        int w, h;
        cin >> w >> h;

        if (w >= l && w == h) cout << "ACCEPTED" << nl;
        else if (w < l || h < l) cout << "UPLOAD ANOTHER" << nl;
        else cout << "CROP IT" << nl;
    }

    return 0;
}
