#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define mod 1000000007
fstream ff;

string s;

long long extra,x,sum=0,t,a,b,c,d,e,f,tcase=0,n,m,k,i,j,max_count=0;

int main()
{
    //ff.open("output.txt");
    cin>>t;
    while(t--)
    {
    	int fs=0,tns=0;
    	cin>>n;
    	bool res=true;
    	while(n--)
    	{
    		cin>>k;
    		if(k==5) fs++;
    		else if(k==10)
    		{
    			tns++;
    			if(!fs) res=false;
    			else fs--;
			}
			else
			{
				if(tns) tns--;
				else if(fs>=2) 
				{
					fs-=2;
				}
				else res=false;
			}
		}
		if(res) cout<<"YES\n";
		else cout<<"NO\n";
	}
    return 0;
}
