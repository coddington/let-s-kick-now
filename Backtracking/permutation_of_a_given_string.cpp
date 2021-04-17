void permutation(string a,int l,int r,set<string>& s1)
    {
       if(l==r)
       {
           
           s1.insert(a);
           return;
       }
       for (int i = l; i <= r; i++)
		{

			// Swapping done
			swap(a[l], a[i]);

			// Recursion called
			permutation(a, l+1, r,s1);

			//backtrack
			swap(a[l], a[i]);
		}
        return;
    }
