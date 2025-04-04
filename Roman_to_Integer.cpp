class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash_table;
        int ans = 0;
        int i = 0;

        hash_table['I'] = 1;
        hash_table['V'] = 5;
        hash_table['X'] = 10;
        hash_table['L'] = 50;
        hash_table['C'] = 100;
        hash_table['D'] = 500;
        hash_table['M'] = 1000;

        while (i < s.length()){
            if (hash_table[s[i]] >= hash_table[s[i+1]])
                ans += hash_table[s[i]];
            else
                ans -= hash_table[s[i]];
            i++;
        }
        return ans;
    }
};
