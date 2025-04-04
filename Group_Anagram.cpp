class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> ansMap;
        string strsI;

        for(int i = 0; i < strs.size(); i++){
            strsI = strs[i];
            sort(strsI.begin(), strsI.end());
            ansMap[strsI].push_back(strs[i]);
        }
        for(auto it = ansMap.begin(); it != ansMap.end(); it++){
            ans.push_back(it->second);
        }

        return ans;
    }
};
