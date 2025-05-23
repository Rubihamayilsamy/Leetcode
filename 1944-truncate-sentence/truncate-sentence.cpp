class Solution {
public:
    string truncateSentence(string s, int k) {
    string res;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ')
        {
            c++;
            if(c==k) break;
        }
        res+=s[i];
    }  
    return res; 
    }
};