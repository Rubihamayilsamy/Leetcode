class Solution {
public:
    int maxProduct(int n) {
    vector<int> res;
    int max=0;
    while(n)
    {
        int x=n%10;
        res.push_back(x);
        n=n/10;
    } 
    for(int i=0;i<res.size()-1;i++)
    {
        for(int j=i+1;j<res.size();j++)
        {
            int v=res[i]*res[j];
            if(max<v)
            {
                max=v;
            }
        }
    } 
    return max; 
    }
};