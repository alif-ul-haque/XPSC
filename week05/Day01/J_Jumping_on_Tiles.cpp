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
char y;
bool cmp(pair<char,int> a,pair<char,int> b)
{
    if(abs(a.first-y)<abs(b.first-y)) return true;
    else return false; 
}
signed main()
 {
    granite_state
    int t;
    cin>>t;
    while(t--)
    {
        string A;
        cin>>A;
        int n = A.size();
        y = A[0];
        vector<pair<char,int>>st;
         for(int i=0;i<n;i++)
        {
            if(A[0]>A[n-1] && A[i]>=A[n-1] && A[i]<=A[0] || A[0]<=A[n-1] && A[i]>=A[0] &&A[i]<=A[n-1])
            {
                 st.push_back({A[i],i+1});
            }
        }
        //n = A.size();
        if(n>2)
        sort(st.begin()+1,st.end()-1,cmp);
        vector<int>v,w;
        for(auto x:st)
        {
            //cerr<<x.first<<" "<<x.second<<endl;
            if(x.second==n)
            {
                v.push_back(x.first);
                w.push_back(x.second);
                break;
            }
            else
            {
                v.push_back(x.first);
                w.push_back(x.second);
            }
        }
        //cerr<<endl;
        int s = 0;
        for(int i=1;i<v.size();i++)
        {
              s+=abs(v[i]-v[i-1]);
        }
        cout<<s<<" "<<w.size();
        line;
        for(auto x:w)
        {
            cout<<x<<" ";
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