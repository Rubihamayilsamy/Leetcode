class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
    int t=0;
    int c=0;
    for(auto i:apple)
    {
        t+=i;
    } 
    sort(capacity.begin(),capacity.end(),[](int a,int b){return a>b;});
    int b=0;
    for(auto i:capacity)
    {
        if(b<t){
        b+=i;
        c++;
        }
    }
    return c;
    }
};