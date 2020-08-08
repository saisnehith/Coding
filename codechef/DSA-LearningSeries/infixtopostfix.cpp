#include<bits/stdc++.h>

using namespace std;

int order(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' or c=='/'){
        return 2;
    }
    else if(c=='+' or c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}

int main( ){
    int t;
    cin>>t;
    while(t--){
        int i,j,n,k;
        string infix,postfix;
        cin>>n;
        cin>>infix;
        stack<char> s;
        s.push('e');
        for(i=0;i<n;i++){
            if(infix[i]<='Z' and infix[i]>='A'){
                postfix+=infix[i];
            }
            else if(infix[i]=='('){
                s.push(infix[i]);
            }
            else if(infix[i]==')'){
                while(s.top()!='e' and s.top()!='('){
                    postfix+=s.top();
                    s.pop();
                }
                if(s.top()=='('){
                    s.pop();
                }
            }
            else{
                while(s.top()!='e' and order(s.top())>=order(infix[i])){
                    postfix+=s.top();
                    s.pop();
                }
                s.push(infix[i]);
            }
        }
        while(s.top()!='e'){
            postfix+=s.top();
            s.pop();
        }
        cout<<postfix<<endl;
    }
    return 0;
}