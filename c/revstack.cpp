#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &st, int e){
    if(st.empty()){
        st.push(e);
        return;
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,e);
    st.push(topele);
}

void revstack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int e=st.top();
    st.pop();
    revstack(st);
    insertatbottom(st,e);
}


int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    revstack(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }cout<<endl;
    return 0;
}