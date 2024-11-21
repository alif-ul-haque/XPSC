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
        string txt;
        cin>>txt;
        if(n==1)
        {
            cout<<0;
        }
        else
        {
            int j = 0;
            int op1 = 0;
            for(int i=0;i<n;i++)
            {
                if(txt[i]=='1' && txt[i+1]=='0')
                {
                    op1++;
                }
                if(txt[i]=='1') j = i;
            }
            if(j==n-1) op1++;
            int op0 = 0;
            j = 0;
             for(int i=0;i<n;i++)
            {
                if(txt[i]=='0' && txt[i+1]=='1')
                {
                    op0++;
                }
                if(txt[i]=='0') j = i;
            }
            if(j==n-1) op0++;
            cout<<min(op1,op0);
        }
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