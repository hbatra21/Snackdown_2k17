#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli x11,y11,x12,y12,x21,y21,x22,y22,a,b,c,d;
        cin>>x11>>y11>>x12>>y12>>x21>>y21>>x22>>y22;
        a=x12-x11;b=y12-y11;c=x22-x21;d=y22-y21;
        if((x11==x22&&y11==y22)||(x11==x21&&y11==y21)||(x12==x22&&y12==y22)||(x12==x21&&y12==y21))
        {
            cout<<"yes\n";
        }
        else
        {
            if(a==0&&c==0&&(x11==x22))
            {
                if((y11>y21&&y11>y22&&y12>y21&&y12>y22)||(y11<y21&&y11<y22&&y12<y21&&y12<y22))
                    cout<<"no\n";
                else
                    cout<<"yes\n";
            }
            else if(b==0&&d==0&&(y11==y22))
            {
                if((x11>x21&&x11>x22&&x12>x21&&x12>x22)||(x11<x21&&x11<x22&&x12<x21&&x12<x22))
                    cout<<"no\n";
                else
                    cout<<"yes\n";
            }
            else
            {
                cout<<"no\n";
            }
        }
 
    }
    return 0;
}
