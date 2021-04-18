#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <map>

typedef pair<int, pair<int, int>> ppi;
typedef pair<int, int> pi;
typedef pair<int, string> psi;
#define ll long long


#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define sp " "
#define nl "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define fst ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/*naive approach*/

int pattern() {
    string a="ababababab";
    string p="ab";

    //we need to match if p is in a or not

    int i=0;
    int j=0;
    int count=0;

    while(i<a.size() && j<p.size()){

        if(a[i]==p[j])
        {
            int k;
            for(k=i;k<a.size(),j<p.size();++k){
                if(a[k]==p[j])
                {
                    j++;
                }
                else
                {
                    break;
                }
            }
            if(j==p.size())
            {
                // cout<<"true";
                j=0;
                i=k;
                count++;
                
            }
            else
            {
                j=0;
                i++;
            }
        }
        else
        {
            i++;
            j=0;
        }
    }
    return count;

}

int main()
{
    int ans=pattern();
    cout<<ans;
    return 0;
}

/**kmp approach*/


int main()
{
    string a = "ababababab";
    string p = "ab";

    vector<int> v(p.size(), 0);

    int j = 0;

    for (int i = 1; i < p.size(); i++)
    {
        if (p[i] == p[j])
        {
            v[i] = j + 1;
            j++;
            i++;
        }
        else
        {
            if (j != 0)
            {
                j = v[j - 1];
            }
            else
            {
                v[i] = 0;
                i++;
            }
        }
    }

    int ith = 0;
    int jth = 0;
    int c=0;
    while (ith < a.size())
    {
        if (a[ith] == p[jth])
        {
            ith++;
            jth++;
        }
        else
        {
            if (jth != 0)
            {
                jth = v[jth - 1];
            }
            else
            {
                ith++;
            }
        }
        if (jth == p.size())
        {
            c++;
            jth=0;
        }
    }
    cout<<c;
}

