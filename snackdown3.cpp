#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <ll> a,b;
        ll n,q;
        cin>>n>>q;
        ll zzz=9999999999;
        a.push_back(zzz);
        for(int i=1;i<=n;i++)
        {
            ll p;
            cin>>p;
            a.push_back(p);
        }
        sort(a.begin(),a.end(),greater<ll>());
        ll i=1,j=0,cum=0;
        for(j=1;j<=n;j++)
        {
            cum+=a[i]-a[j];
            ll left =n-j;
            if(left >= cum)
            {
                ll z=left-cum;
                b.push_back(a[i]+z/(j-i+1));
            }
            else
            {
                while(left<cum)
                {
                    i++;
                    cum-=(j-(i-1))*(a[i-1]-a[i]);
                }
                ll z=left-cum;
                b.push_back(a[i]+z/(j-i+1));
            }
        }
        sort(b.begin(),b.end());
        while(q--)
        {
            ll m;
            cin>>m;
            vector <ll>::iterator it=lower_bound(b.begin(),b.end(),m);
            ll ans=it-b.begin();
            ans=n-ans;
            cout<<ans<<endl;
        }
    }
}
 


