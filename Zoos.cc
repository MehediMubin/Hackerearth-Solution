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

    string str;
    cin >> str;

    int o = 0, z = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'z') z++;
        else if (str[i] == 'o') o++;
    }

    if (2 * z == o) cout << "Yes" << nl;
    else cout << "No" << nl;

    return 0;
}
