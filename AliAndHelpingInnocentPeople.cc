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

    bool ok = true;
    if (str[2] == 'A' || str[2] == 'E' || str[2] == 'I' || str[2] == 'O' || str[2] == 'U'
    || str[2] == 'Y') {
        cout << "invalid" << nl;
    }
    else {
        for (int i = 0; i + 1 < str.size(); i++) {
            if (i == 1 || i == 2 || i == 5 || i == 6) continue;
            int a = str[i] - '0';
            int b = str[i + 1] - '0';
            if ((a + b) % 2 != 0) {
                ok = false;
                break;
            }
        }
        if (ok) cout << "valid" << nl;
        else cout << "invalid" << nl;
    }

    return 0;
}
