#include <bits/stdc++.h>
using namespace std;
#define granite_state                 \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define vsb (v).begin(), (v).end()
#define vse (v).rbegin(), (v).rend()
#define spc " "
#define pb push_back
#define pf push_front;

signed main()
{
    granite_state int t;
    cin >> t;
    while (t--)
    {
        string txt;
        cin >> txt;
        int n = txt.size();
        string ans = "";
        string ans1 = "";
    
            for (int i = 0; i < n; i++)
            {
                ans += '(';
                ans += ')';
            }
            for (int i = 0; i < n ; i++)
            {
                ans1 += '(';
            }
            for (int i = 0; i < n ; i++)
            {
                ans1 += ')';
            }
        if(ans.find(txt)==string::npos)
        {
            YES;
            cout<<ans;
            line;
        }
        else if(ans1.find(txt)==string::npos)
        {
            YES;
            cout<<ans1;
            line;
        }
        else
        {
            NO;
        }
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
// think simply, it's always easier than it seems at first
// PEN AND PAPER instead of ms paint
// keep at it even if it feels exhausting(we're not doing this for fun anymore)
// 2 GHONTAR AGER EDITORIAL DHORBI NA