int ans = INT_MIN;
void make_visited(vector<vector<int>> &vis, int x, int y, int m, int n)
{
    for (int i = 0; i < n; ++i)
    {
        vis[i][y] = 1;
    }
    for (int j = 0; j < m; ++j)
    {
        vis[x][j] = 1;
    }
    return;
}
void make_unvisited(vector<vector<int>> &vis, int x, int y, int m, int n)
{
    for (int i = 0; i < n; ++i)
    {
        vis[i][y] = 0;
    }
    for (int j = 0; j < m; ++j)
    {
        vis[x][j] = 0;
    }
    return;
}
void solve(vector<vector<int>> nums, int n, int m, int i, int j, vector<vector<int>> &vis, int score)
{
    if (i == n - 1)
    {
        ans = max(ans, score);
        return;
    }
    if (j == m)
    {
        return;
    }
    for (int i = 0; i < n; ++i)
    {
        if (vis[i][j] == 0)
        {
            make_visited(vis, i, j, n, m);
            solve(nums, n, m, i, j + 1, vis, score + nums[i][j]);
            make_unvisited(vis, i, j, n, m);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }
}