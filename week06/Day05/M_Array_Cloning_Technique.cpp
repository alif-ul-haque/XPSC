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
        vector<int>v(n),w(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
       { 
        cin>>v[i];
        m[v[i]]+=1;
       }
       int mx = -9;
       for(auto x:m)
       {
           mx = max(mx,x.second);
       }
        int cnt = n-mx;
        n-=mx;
        while(n>0)
        {
           n-=mx;
           cnt++;
           mx*=2;
        }
 
        cout<<cnt<<endl;
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