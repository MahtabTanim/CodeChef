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
int process(ll n){
   int sum = 0;
   while(n){
        sum+= n%10;
        n=n/10;
   }
   return sum;
}

int main()
{
    cin>>t;
    while(t--)
    {
       cin>>n;
       int morty=0, chef=0;
       while(n--)
       {
           cin>>a>>b;
           a=process(a),b=process(b);
           if(a>b) chef++;
           else if(b>a) morty ++;
           else chef++,morty++;
       }
       if(chef>morty){
        cout<<0<<" "<<chef<<endl;
       }
       else if(morty>chef) {
        cout<<1<<" "<<morty<<endl;
       }else{
          cout<<2<<" "<<morty<<endl;
       }
    }
    return 0;
}
