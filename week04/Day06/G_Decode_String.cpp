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
        string ans  = "";
        for(int i=n-1;i>=0;i--)
        {
             if(txt[i]=='0' && i>=2)
            {
                 char tmp = (txt[i-2]-'0')*10+txt[i-1]-'0'-1+'a';
                 //cerr<<(int)tmp<<endl;
                 ans+=tmp;
                 i--;
                 i--;
            }
            else
            ans+=txt[i]-'0'-1+'a';
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
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