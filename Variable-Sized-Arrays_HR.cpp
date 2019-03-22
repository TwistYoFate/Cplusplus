/*
    Name:Deepanshu Yadav
    Handle:FireFrost/acevenom
*/

#include<bits/stdc++.h>

#define ll long
#define l(i,k,n) for(int i=k; i<n; i++ )
#define dl(i,k,n) for(int i=k; i>n; i--)
#define nl cout<<"\n"
#define tcloop  long i=0;cin>>i;while(i--)
int gcd(long a,long b){ return(b==0?a:gcd(b,a%b));}
int lcm(long a,long b){ return((a*b)/gcd(a,b));}

using namespace std;

ll* myArray(ll n){
    ll *a=new ll[n];
    return(a);
};

int main(){

    ll n,q,temp,temp2;
    ll** k;
    cin>>n>>q;
    k=new ll*[n];

    l(i,0,n){
        cin>>temp;
        k[i]=myArray(temp);
        l(j,0,temp){
            cin>>temp2;
            k[i][j]=temp2;
        }
    }

    while(q--){
        cin>>temp>>temp2;
        cout<<k[temp][temp2]<<"\n";
    }
return 0;
}
