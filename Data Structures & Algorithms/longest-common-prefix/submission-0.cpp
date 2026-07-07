class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string ans;

        sort(strs.begin(),strs.end());
        int n = strs.size();

        string start = strs[0];
        string end = strs[n-1];

        int size1 = start.size();
        int size2 = end.size();

        int i=0,j=0;

        while(i<size1 && j<size2){
            if(start[i] == end[j]){
                ans+=start[i];
                i++;j++;}
            else break;
        }

        return ans;

    }
};