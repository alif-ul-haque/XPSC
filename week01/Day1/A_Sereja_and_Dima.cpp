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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int s1 = 0;
    int s2 = 0;
    int i = 0;
    int j = n-1;
    int tmp = 0;
    while(i<=j)
    {
        if(tmp==0)
        {
            if(v[i]>=v[j])
            {
                s1+=v[i];
                i++;
            }
            else
            {
                s1+=v[j];
                j--;
            }
            tmp = 1;
        }
        else
        {
            if(v[i]>=v[j])
            {
                s2+=v[i];
                i++;
            }
            else
            {
                s2+=v[j];
                j--;
            }
            tmp = 0;
        }
    }
    cout<<s1<<" "<<s2;
    line;
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