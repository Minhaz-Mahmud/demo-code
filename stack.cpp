#include<bits/stdc++.h>
using namespace std;
#define n 10

class stock{
int* arr;
int top;

public:
    stock(){
        arr=new int[n];
        top=-1;
    }

    void push(int x){
    if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
      }
      top++;
      arr[top]=x;
    }

    void pop(){
    if(top==-1){cout<<"No elements  to pop"<<endl;
    return;}
    top--;
    }

    int Top(){
         if(top==-1){cout<<"No elements "<<endl;
    return -1;}
    else{return arr[top];}
    }

    bool emptty(){
    return top==-1;
    }
};

int main(){
stock st;
st.push(1);
st.push(2);
st.push(3);

cout<<st.Top()<<endl;
st.pop();
cout<<st.Top()<<endl;
st.pop();
st.pop();
st.pop();
cout<<st.Top()<<endl;
cout<<st.emptty()<<endl;


return 0;}
