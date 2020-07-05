#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define N 101
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;

ll a,q,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;

int gcd(int a, int b){
    if(a==0) return b;
    return gcd(b%a,a);

}
int A[maxn+3], PRE[maxn+3],SUFF[maxn+3];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        for(int i = 1;i<=n;i++) cin>>A[i];
        PRE[0]=0;
        for(int i = 1;i<n-1;i++){
            PRE[i]=gcd(PRE[i-1],A[i]);
        }
        SUFF[n+1]=0;
        for(int i = n;i>=1;i--){
            SUFF[i]=gcd(SUFF[i+1],A[i]);
        }
        while(q--)
        {
            cin>>l>>r;
            cout<<gcd(PRE[l-1],SUFF[r+1])<<endl;
        }
    }
    return 0;
}
