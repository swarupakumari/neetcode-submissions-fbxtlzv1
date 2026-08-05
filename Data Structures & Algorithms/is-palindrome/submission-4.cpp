class Solution {
public:
    bool isPalindrome(string s) {
    //     string ans="";
    //    for( char c:s){
    //     if(isalnum(c))
    //      ans+=tolower(c);
    //    }
    //    string original = ans;
    //    reverse(ans.begin(),ans.end());
    //    if(original==ans)   return true;
    //    else return false;   //brute force
  
    int l=0;
    int r=s.length()-1;
    while(l<r){
      while(l<r && !IsAlpha(s[l])){
         l++;
    }
     while(l<r && !IsAlpha(s[r])){
         r--;
    }
    if(tolower(s[r])!=tolower(s[l]))
        return false;

        l++;
        r--;
    }
    return true;
    }
     bool IsAlpha(char c){
    if(c >='A' && c<='Z' || c >='a' && c<='z' || c >='0' && c<='9')
     return true;
     else return false;
   }
};
