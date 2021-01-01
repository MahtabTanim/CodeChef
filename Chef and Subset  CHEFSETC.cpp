#include<bits/stdc++.h>

using namespace std;
#define mod 1000000007
#define PI 3.14159265359
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
#define IG cin.ignore(numeric_limits < streamsize > ::max(), '\n');
#define ll long long int
#define N 1378
#define maxn 100000003
#define FP ff.open("output.txt")
#define FR ff.open("input.txt")
#define valid(a, b) if (a >= 1 && a < row - 1 && b >= 1 && b < col - 1)
    fstream ff;
ll a, q, b, c, d, k, h, e, f, t, m, n, i, j, x, y, count, tcase = 0, l, r;
string s1, s2, s;

int main() {
    cin >> t;
    while (t--) {
        int A[4], res = 0;
        for (int & i: A) cin >> i;
        for (int i = 1; i <= 15; i++) {
            int sum = 0;
            for (int j = 0; j < 4; j++)
                if ((1 << j) & i) sum += A[j];
            if (sum == 0) {
                res = 1;
                break;
            }
        }
        if (res) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}
