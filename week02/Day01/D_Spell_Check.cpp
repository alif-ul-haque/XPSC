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
    string m = "Timur";
    int k = m.size();
    sort(m.begin(),m.end());
    while(t--)
    {
        int n;
        cin>>n;
        string A;
        cin>>A;
        sort(A.begin(),A.end());
        if(k==n)
        {
            if(A==m) YES;
            else NO;
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