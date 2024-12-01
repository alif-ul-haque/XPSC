#include <bits/stdc++.h>
using namespace std;
#define granite_state ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long
#define line cout << "\n"
#define YES cout<<"Yes\n"
#define NO cout<<"No\n"
#define vsb (v).begin(),(v).end()
#define vse (v).rbegin(),(v).rend()
#define spc " "
#define pb push_back
#define pf push_front;
vector<int>v(100002);
signed main()
 {
    granite_state
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       string A;
       cin>>A;
       int frq[26] = {};
       for(int i=0;i<A.size();i++)
       {
           frq[A[i]-'a']++;
       }
       while(n)
       {
           for(int i=0;i<26;i++)
           {
               if(frq[i]>0)
               {
                   cout<<char(i+'a');
                   n--;
                   frq[i]--;
               }
           }
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