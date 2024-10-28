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
    int n;
    cin>>n;
    vector<int>v(n);
    int s = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        s+=v[i];
    }
    if(s%2==0) cout<<s;
    else
    {
        int mx = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if((s-v[i])%2==0)
            {
                mx = max(mx,s-v[i]);
            }
        }
        if(mx==INT_MIN) cout<<0;
        else cout<<mx;
    }
    line;

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