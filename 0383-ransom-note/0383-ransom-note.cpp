class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> um1,um2;
        for(int i=0;i<ransomNote.length();i++)
        {
            um1[ransomNote[i]]=um1[ransomNote[i]]+1;
        }
         for(int i=0;i<magazine.length();i++)
        {
            um2[magazine[i]]=um2[magazine[i]]+1;
        }
        for(int i=0;i<ransomNote.length();i++)
        {
            if(um2[ransomNote[i]]<um1[ransomNote[i]])
                return false;
        }
        return true;
    }
};