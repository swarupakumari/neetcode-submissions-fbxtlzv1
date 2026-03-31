class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force approach
        // sort(s.begin(),s.end()); //nlogn
        // sort(t.begin(),t.end()); // mlogm
        // return s==t;

        unordered_map<int,int> c;
        unordered_map<int,int> cc;

       if(s.length() != t.length())  return false;
       for(int i=0;i<s.length();i++){
        c[s[i]]++;
        cc[t[i]]++;
       }
       return c==cc;
    }
};
