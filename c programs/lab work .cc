#include<bits/stdc++.h>
using namespace std;
#define max 10
int stack1[max];
int top = -1;

void push(int value){
    if(top == max - 1){
        cout << "Error! Stack Overflow" << endl;
    }
    else{
        top++;
        stack1[top] = value;
    }
}



int pop(){
    if(top == -1){
        cout << "Error! Stack Underflow" << endl;
        return -1;
    }
    top--;
    return stack1[top + 1];
}


void print(){
   if(top == -1){
    cout << "Empty Stack" << endl; 
    }

    for(int i = 0; i <= top; i++){ 
    cout << stack1[i] << " "; 
    } 
cout << endl; 
}


int main(){
    int n;
    while(1){
        int val, del, n;
        cin >> n;
        while(n > 0){
            val = n % 2;
            n /= 2;
            push(val);
        }

        while(1){ 
            del = pop(); 
            cout << del << " "; 
            if(top == -1){ 
             break; 
            } 
         } 
    }
}