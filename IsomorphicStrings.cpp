class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(t.length()!=s.length()){
            return false;
        }
        map<char,int>mpa;
        map<char,int>mpb;
        for(int i =0;i<s.length();i++){
            char chs=s[i];
            char cht=t[i];
            if(mpa[chs]!=mpb[cht]){
                return false;
            }
            else{
                mpa[chs]=i+1;
                mpb[cht]=i+1;
            }
        }
        return true;
    }
};
