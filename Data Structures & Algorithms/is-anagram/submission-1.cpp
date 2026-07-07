class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        unordered_map<char,int>s_map;
        unordered_map<char,int>t_map;

        for(int i=0;i<n;i++){
            char x = s[i];
            s_map[x]++;
        }

        for(int i=0;i<m;i++){
            char x = t[i];
            t_map[x]++;
        }

        if(s_map == t_map) return true;
        else return false;
    }
};
