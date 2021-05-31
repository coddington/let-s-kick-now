void permutation(vector<int> v, int c, int n){
    //base case

    if(c>n)
    {
        for(int i=0;i<v.size();++i){
            cout<<v[i]<<" ";
        }
        return ;
    }
    for(int i=0;i<v.size();++i){
        if(v[i]==0)
        {
            v[i]=c;
            permutation(v,c+1,n);
            v[i]=0;
        }
    }
}


int main()
{
    vector<int> v(n,0);
    int n=5; //say
    permutation(v,1,n);
}