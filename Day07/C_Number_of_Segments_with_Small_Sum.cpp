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
    vector<int>v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int l=0,r=0,sum=0;
    int ans = 0;
    while(r<n)
    {
        sum+=v[r];
        if(sum<=s)
        {
            ans += r-l+1;
        }
        else
        {
            while(sum>s)
            {
                sum-=v[l];
                l++;
            }
            if(sum<=s)
           {
               ans += r-l+1;
           }
        }
        r++;
    }
    cout<<ans;
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