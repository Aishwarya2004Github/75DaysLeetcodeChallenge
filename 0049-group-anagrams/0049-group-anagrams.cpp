class Solution {
public:
    
    struct ArrayHash {
        size_t operator()(const array<int,26>& a) const {
            size_t hash = 0;
            for (int i : a) {
                hash ^= hash * 31 + i;
            }
            return hash;
        }
    };
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<array<int,26>, vector<string>, ArrayHash> mp;
        
        for (string &s : strs) {
            
            array<int,26> count{};
            
            for (char c : s)
                count[c - 'a']++;
            
            mp[count].push_back(s);
        }
        
        vector<vector<string>> res;
        
        for (auto &it : mp)
            res.push_back(move(it.second));
        
        return res;
    }
};