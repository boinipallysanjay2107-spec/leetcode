class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()%2!=0) return 0;
        for(char c:s){
            if(c=='('||c=='{'||c=='[')
            st.push(c);
            if(c==')'){
                if(st.empty()) return 0;
                if(st.top()!='('){
                    return 0;
                }
                st.pop();
            }
            if(c=='}'){
                if(st.empty()) return 0;
                if(st.top()!='{'){
                    return 0;
                }
                st.pop();
            }
            if(c==']'){
                if(st.empty()) return 0;
                if(st.top()!='['){
                    return 0;
                }
                st.pop();
            }

        }
        if(st.empty())
        return 1;
        return 0;
    }
};