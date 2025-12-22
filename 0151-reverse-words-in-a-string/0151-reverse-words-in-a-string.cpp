class Solution {
public:
    string reverseWords(string s) {
        string temp = "";
        string ans = "";
        int count = 0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]==' ' && count<1){
                count++;
                reverse(temp.begin(), temp.end());
                if(temp.size()>0){
                    
                    if(ans.size()>0){
                        ans += ' ';
                    }

                    ans += temp;
                }
                
                temp = "";
            }
            else{
                if(s[i]!=' '){
                    temp += s[i];
                }
                count = 0;
            }
        }

        reverse(temp.begin(), temp.end());
        if(temp.size()>0){
            if(ans.size()>0){
                        ans += ' ';
                    }

                    ans += temp;
        }
        temp = "";

        return ans;
    }
};