#include<bits/stdc++.h>
using namespace std;
//#define mod 1000000007
#define pb push_back
#define mp make_pair
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long int
#define maxn 1000000
#define FP ff.open("output.txt")
fstream ff;
#define N 101
ll a,b,c,d,k,h,e,f,t,m,n,i,j,x,y,count,tcase=0,l,r;
string s1,s2,s;
int A[9][9];
int main()
{
    cin>>t;
    while(t--)
    {
        for(int i =1; i<=8; i++)
        {
            for(int j = 1; j<=8; j++) A[i][j]=-1;
        }

        cin>>k;
        int count = 0;
        for(int i = 1; i<=9; i++)
        {
            for(int j = 1; j<=8; j++)
            {
                A[i][j]=1;
                count++;
                if(count==k) break;
            }
            if(count == k) break;
        }
        cout<<'O';
        for(int i =1; i<=8; i++)
        {
            for(int j = 1; j<=8; j++)
            {
                if(!(i==1&&j==1))
                {
                    if(A[i][j]==(-1)) cout<<'X';
                    else cout<<'.';
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
