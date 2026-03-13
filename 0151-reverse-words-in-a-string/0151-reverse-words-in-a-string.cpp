class Solution {
public:
    string reverseWords(string s) {
        string word = "";
        string ans = "";

        for(int i = s.size()-1; i >= 0; i--){
            
            if(s[i] != ' '){
                word = s[i] + word;
            }
            else{
                if(word != ""){
                    ans += word + " ";
                    word = "";
                }
            }
        }

        if(word != "")
            ans += word;

        if(ans.back() == ' ')
            ans.pop_back();

        return ans;
    }
};