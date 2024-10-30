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
map<string,string>par,final;
signed main()
 {
    granite_state
    int q;
    cin>>q;
    while(q--)
    {
         string A,B;
         cin>>A>>B;
         if(final.find(A)!=final.end())
         {
             string tmp = final[A];
             par[tmp] = B;
             final.erase(A);
             final[B] = tmp;
         }
         else
         {
             par[A] = B;
             final[B] = A;
         }
    }
    cout<<final.size();
    line;
    for(auto x:final)
    {
        cout<<x.second<<" "<<x.first;
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