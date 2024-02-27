class Solution {
public:
    int firstUniqChar(string s) {
        int arr[26];
        for(int i=0;i<s.length();i++)
        {
           int count=s[i]-'a';
            arr[count]++;
        }
        for(int i=0;i<s.length();i++)
        {
            if(arr[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};