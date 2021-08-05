
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
        int n;
        cin >> n;

        int arr[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) cin >> arr[i][j];
        }
        int counter = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                for (int k = i; k < n; k++) {
                    for (int l = j; l < n; l++)
                    if (arr[i][j] > arr[k][l]) counter++;
                }
            }
        }
        cout << counter << nl;
    }

    return 0;
}
