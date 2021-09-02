#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll b[100006];
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+1];
        ll sum=0;
        for(ll i=0;i<100004;i++)
        b[i]=0;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[a[i]]=1;
        }
        for(ll i=0;i<n;i++)
        {
            ll chk=(m-a[i])%m;
            cout<<chk<<" ";
            if(b[chk]==0 && chk!=0)
            sum++;
        }
        cout<<sum<<"\n";
    }
}