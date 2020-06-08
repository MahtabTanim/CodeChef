#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{	
	cin>>t;
	while(t--)
	{
		cin>>n;
		while(n%2==0 && n) n/=2;
		cout<<(n-1)/2<<endl;
	}
    return 0;
}
