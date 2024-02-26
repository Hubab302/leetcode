class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> um1;
        for(int i=0;i<magazine.length();i++)
        {
            um1[magazine[i]]=um1[magazine[i]]+1;
        }
         for(int i=0;i<ransomNote.length();i++)
        {
             if(um1.find(ransomNote[i])==um1.end())
                 return false;
             else
             {
                 int count=um1[ransomNote[i]];
                 count--;
                 um1[ransomNote[i]]=count;
                 if(count<0)
                     return false;                 
             }
        }
        return true;
    }
};