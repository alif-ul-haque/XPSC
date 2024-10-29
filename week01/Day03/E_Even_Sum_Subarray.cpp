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
        vector<int>pre(n+1);
        pre[0] = 0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            pre[i+1] = pre[i]+a;
        }
        int j = 0;
        int mx = INT_MIN;
        for(int i=1;i<n+1;i++)
        {
             for(int k=i;k<n+1;k++)
             {
                int ad = pre[k]-pre[i-1];
                if(ad%2==0)
                {
                     j = max(j,k-i+1);
                }
             }
        }
        cout<<j;
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