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
        int n;
        cin>>n;
        vector<int>v(n);
        int cnt0 = 0;
        int cnt1 = 0;
        int cnte = 0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]==0) cnt0++;
            else if(v[i]>=2) cnte = 1;
        }
        int tmp = ceil((double)n/2);
        if(cnt0<=tmp)
        {
            cout<<0;
        }
        else if(cnte|(cnt0==n))
        {
            cout<<1;
        }
        else cout<<2;
        line;
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