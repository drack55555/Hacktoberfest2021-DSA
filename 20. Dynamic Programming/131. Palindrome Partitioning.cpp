//Question Link:
//https://leetcode.com/problems/palindrome-partitioning/


class Solution {
public:
      vector<vector<string>> partition(string s) {
     vector<string>ans;
        check(s,0,s.length()-1,ans);
          return res;
    }
        bool ispalendrome(string &str,int i,int j){
      while(i<j){
        if(str[i]!=str[j]) return false;
        i++;
        j--;
      }
    return true;
  }
   vector<vector<string>> res;
void check(string s,int start,int end,vector<string>ans){
     if(start>end) return ;
  
    int temp=INT_MAX;
     for(int k=start;k<=end;k++){
       if(ispalendrome(s,start,k)){
           ans.push_back(s.substr(start,k-start+1));
          check(s,k+1,end,ans);
         if(k==end)
         res.push_back(ans);
         ans.pop_back();
      }}}    
};
