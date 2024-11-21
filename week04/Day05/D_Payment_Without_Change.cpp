#include <bits/stdc++.h>
using namespace std;
#define granite_state ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define vsb (v).begin(),(v).end()
#define vse (v).rbegin(),(v).rend()
#define spc " "
#define pb push_back
#define pf push_front;

signed main()
 {
    granite_state
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int tot = a*n+b;
        if(tot>=s)
        {
            if(b>=s)
            {
                YES;
            }
            else if(s%n==0)
            {
                if((s/n)<=a) YES;
                else
                {
                    int vl = s%n;
                    if(b>=vl) YES;
                    else NO;
                }
            }
            else
            {
                int vl = s%n;
                if((s/n)<=a)
                {
                    if(b>=vl) YES;
                    else NO;
                }
                else
                {
                    if(s-(a*n)<=b) YES;
                    else NO;
                }
            }
        }
        else NO;
    }
}

    ////////////////////////////////////////////////////
    //                                                 //
    //                 A                               //
    //                                                 //
    //                 L                               //
    //                                                 //
    //                 I                               //
    //                                                 //
    //                 F                               //
    /////////////////////////////////////////////////////
//think simply, it's always easier than it seems at first
    //PEN AND PAPER instead of ms paint
    //keep at it even if it feels exhausting(we're not doing this for fun anymore)
    //2 GHONTAR AGER EDITORIAL DHORBI NA