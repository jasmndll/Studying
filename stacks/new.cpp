#include<iostream>
#include<vector>
using namespace std;

class Stack{
    vector<int> v;
public:
    void push(int x){
        v.push_back(x);
    }
    void pop(){
        if(!v.empty()){
            v.pop_back();
        }
        else{
            return;
        }
    }
    int top(){
        return v.back();
    }
    bool empty(){
        return v.empty();
    }
    int size(){
        return v.size();
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(50);
    cout<<"Top: "<<s.top()<<endl;
    s.pop();
    cout<<"Top: "<<s.top()<<endl;
    return 0;
}