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
    int n,s;
    cin>>n>>s;
    vector<int>v(n),w(n+1);
    for(int i=0;i<n;i++)
    cin>>v[i];
    w[0] = 0;
    for(int i=1;i<n+1;i++)
    {
        w[i] = w[i-1]+v[i-1];
    }
    int l=1,r=n,ans=1e18;
    while(l<=r)
    {
        int tmp = w[r]-w[l-1];
        if(tmp>=s)
        {
            ans = min(ans,r-l+1);
            l++;
        }
        else r--;
    }
    if(ans==1e18) cout<<-1;
    else cout<<ans;
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