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
        int n,k;
        cin>>n>>k;
        vector<int>v(k),prs(n);
        for(int i=0;i<k;i++) cin>>v[i];
        int s = 0;
        int j = k-1;
        for(int i=n-1;i>=1;i--)
        {
             if(i<=n-k)
             {
                prs[i] = prs[i+1];
                v[0]-=prs[i];
             }
             else
             {
                 prs[i] = v[j]-v[j-1];
                 j--;
             }
        }
        prs[0] = v[0];
        bool flag = true;
        // for(int i=0;i<n;i++)
        // {
        //     cerr<<prs[i]<<" ";
        // }
        // cerr<<endl;
        // cerr<<n-k<<endl;
        for(int i=0;i<n-1;i++)
        {
            if(prs[i]>prs[i+1])
            {
                flag = false;
                break;
            }
        }
        if(flag || n==1 || k==1) YES;
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