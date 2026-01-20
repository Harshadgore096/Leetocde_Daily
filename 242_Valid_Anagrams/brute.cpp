//use sortinh and comparing one by one 
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=t.length();
        int n1=s.length();
        if(n!=n1)
        {
            return false;
        }
        int flag=1;
       sort(s.begin(),s.end());
       sort(t.begin(),t.end());
       for(int i=0;i<n;i++ )
       {
        if(s[i]!=t[i])
        {
            flag=0;
            break;
        }
       }
       if(flag)
       {
        return true;
       } 

       return false;
    }
};


//TC-> O(nlog n)
//SC-> O(1)