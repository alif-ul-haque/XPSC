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
        vector<int>even,odd;
        for(int i=0;i<n;i++)
        {
              int a;
              cin>>a;
              if(a%2==0)
              {
                 even.push_back(a);
              }
              else
              odd.push_back(a);
        }
        if(odd.empty() || even.empty())
        {
            cout<<0;
            line;
            continue;
        }
        int o = odd.size();
        int e = even.size();
        sort(even.begin(),even.end());
        sort(odd.rbegin(),odd.rend());
        int mx = odd[0];
        bool flag = false;
        for(int i=0;i<e;i++)
        {
            if(even[i]<mx)
            {
                mx+=even[i];
            }
            else
            {
                flag = true;
                break;
            }
        }
        if(flag) cout<<e+1;
        else cout<<e;
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