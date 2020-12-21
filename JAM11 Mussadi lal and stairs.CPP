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

ll A[100001];

void F() {
    A[1] = 1;
    A[2] = 2;
    A[3] = 4;
    for (int i = 4; i <= 100000; i++) {
        A[i] = (A[i - 1] + A[i - 2] + A[i - 3]) % mod;
    }
}

int main() {
    F();
    cin >> t;
    while (t--) {
        cin >> n;
        cout << A[n] << endl;
    }
    return 0;
}
