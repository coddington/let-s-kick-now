#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
#include <map>

typedef pair<long long int, pair<long long int, long long int>> ppi;
typedef pair<long long int, long long int> pi;
typedef pair<long long int, string> psi;
#define ll long long

#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define sp " "
#define nl "\n"
#define rep(i, n) for (long long int i = 0; i < n; i++)
#define fst                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

bool isNotVisited(string node, vector<string> path)
{
    for (auto it = path.begin(); it != path.end(); ++it)
    {
        if (*it == node)
        {
            return false;
        }
    }
    return true;
}

void f1(map<int, string> &cit, int n)
{
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        cit[i] = temp;
        return;
    }
}
void f2(map<string, list<string>> &g, int conn)
{

    for (int i = 0; i < conn; i++)
    {
        string x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
}

void bfs(queue<vector<string>>& q,int destination,map<string, list<string>> &g,vector<string>& path)
{
    while (!q.empty())
    {

        path = q.front();
        q.pop();

        string last = path[path.size() - 1];

        if (last == destination)
        {
            // answer = path;
            break;
        }

        for (auto i = g[last].begin(); i != g[last].end(); i++)
        {
            if (isNotVisited(*i, path))
            {
                vector<string> newpath(path);
                newpath.push_back(*i);
                q.push(newpath);
            }
        }
    }
}
int main()
{
    /* Write your code here */

    int n;
    cin >> n;
    map<string, bool> vis;
    map<int, string> cit;
    map<string, list<string>> g;

    string source;
    string destination;
    f1(cit, n);

    cin >> source >> destination;

    int conn;
    cin >> conn;
    f2(g, conn);

    // Actual bfs code to find the path

    queue<vector<string>> q;

    vector<string> path;
    path.push_back(src);
    q.push(path);

    // list<string> answer;
    bfs(q,distination,g,path);
 
    for (auto i = path.begin(); i != path.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}