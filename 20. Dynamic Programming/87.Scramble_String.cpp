// Problem Link:
// https://leetcode.com/problems/scramble-string

class Solution{
        public:
                unordered_map<string, bool> h;

                bool getthis(string a, string b){
                        if(a.compare(b) == 0)
                                return true;

                        if(a.length() <= 1)
                                return false;          
                        int n = a.length();

                        bool check = false;

                        string key = a;

                        key += ' ' + b;

                        if(h.find(key) != h.end()) 
                                return h[key];

                        for(int i = 1; i < n; i++){
                                bool change = getthis(a.substr(0,i), b.substr(n - i,i)) && getthis(a.substr(i), b.substr(0, n - i));
                                bool unchange = getthis(a.substr(0,i), b.substr(0,i)) && getthis(a.substr(i,n - i), b.substr(i,n - i));

                                if(change || unchange){
                                        check = true;
                                        break;
                                }
                        }

                        return h[key] =  check;
                }

                bool isScramble(string s1, string s2){
                        if(s1 == b) return true;

                        if(s1.length() != s2.length())
                                return false;

                        if(s1.empty() && s2.empty()) 
                                return true;

                        return getthis(s1, s2);
                }
};
