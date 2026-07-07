class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        unordered_map<char,int>s_map;
        unordered_map<char,int>t_map;

        for(int i=0;i<n;i++){
            char x = s[i];
            if(s_map.find(x) != s_map.end()){
                s_map[x]++;
            }
            else s_map[x]=1;
        }

        for(int i=0;i<m;i++){
            char x = t[i];
            if(t_map.find(x) != t_map.end()){
                t_map[x]++;
            }
            else t_map[x]=1;
        }

        if(s_map == t_map) return true;
        else return false;
    }
};
