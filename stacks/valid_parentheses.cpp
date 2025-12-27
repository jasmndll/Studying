#include<iostream>
#include<stack>
using namespace std;

class Stack{
public: 
    bool check(string s){
        stack<int> st;
        for(char x : s){
            if( x== '(' || x == '{' || x == '['){
                st.push(x);
            }
            else{
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if((x == ')' && top != '(' ) || (x == '}' && top != '{') || (x == ']' && top !='[')){
                    return false;
                }
            }
        }
        return st.empty();
    }
};


int main() {
    Stack sk;
    string s = "[({})]";
    if(sk.check(s)){
        cout<<"Valid palindrome."<<endl;
    }
    else{
        cout<<"Invalid.";
    }
    return 0;
}