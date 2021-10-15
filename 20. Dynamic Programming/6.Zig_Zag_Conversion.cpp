
//Program Link:
//https://leetcode.com/problems/zigzag-conversion/submissions/


map<int, string> mp;

    if(numRows == 1) 
        return s;
    
    int r = 0;
    int nxt = 1;
    for(auto i = 0; i < s.length(); ++i){
        string value = mp[r] + s.at(i);
        mp[r] = value;
    
        if(r < nxt){
            r = nxt;
            nxt++;
            if(nxt == numRows){
                nxt = nxt -2;;
            }
        }
        else if(r > nxt){
            r--;
            nxt--;
            if(nxt == -1){
                nxt = nxt +2;;
            }
        }
 
    }
    
    string rslt = "";
    for(auto i = 0; i< numRows; ++i) {
        rslt += mp[i];
    }

    return rslt;
}
