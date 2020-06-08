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
    	cin>>s;
    	int count=0;
    	n=s.length();
    	for(int i=0;i<n;++i)
    	{
    		if(s[i]=='x' && s[i+1]=='y') 
    		{
    			count++;
    			i++;
			}
    		else if(s[i]=='y' && s[i+1]=='x')
    		{
    			count++;
    			i++;
			}
		}
		cout<<count<<endl;
	}
    return 0;
}
