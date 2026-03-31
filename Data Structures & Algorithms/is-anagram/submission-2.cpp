class Solution {
public:
    bool isAnagram(string s, string t) {
        //brute force approach


        // sort(s.begin(),s.end()); //nlogn
        // sort(t.begin(),t.end()); // mlogm
        // return s==t;
  //////////////////////////////////////////////////////
                   //better soln


    //     unordered_map<int,int> c;
    //     unordered_map<int,int> cc;

    //    if(s.length() != t.length())  return false;
    //    for(int i=0;i<s.length();i++){
    //     c[s[i]]++;
    //     cc[t[i]]++;
    //    }               0(n+m)     0(1)
    //    return c==cc;

    /////////////////////////////////////////////////
          //array 
          if(s.length()!=t.length()) return false;
          vector<int>count(26,0);
          for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
             count[t[i]-'a']--;
          }
          for(int v:count){
            if(v!=0) return false;
          }
          return true;
    }
};
