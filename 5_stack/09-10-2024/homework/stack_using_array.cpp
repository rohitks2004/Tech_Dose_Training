#include<bits/stdc++.h>
using namespace std;
#define size 10

class Stack{
    private:
        int arr[size];
        int top;
    public:
        Stack(){
            this->top=-1;
        }
        bool isempty(){
            return this->top==-1;
        }
        int getTop(){
            if(this->isempty()){
                return -1;
            }
            return arr[this->top];
        }
        void push(int val){
            if(this->top==size-1){
                cout<<"stack overflow"<<endl;
            }
            arr[++top]=val;
        }
        int pop(){
            if(this->isempty()){
                cout<<"stack underflow"<<endl;
                return -1;
            }
            return arr[top--];
        }
        
        void print(){
            if(this->isempty()){
                cout<<"stack is empty"<<endl;
            }
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }cout<<endl;
        }

};

int main()
{
   Stack stk;
   stk.push(1);
   stk.push(2);
   stk.push(3);
   cout<<stk.isempty()<<endl;
   cout<<stk.getTop()<<endl;
   stk.print();
   stk.pop();
   cout<<stk.getTop()<<endl;
   stk.print();
   stk.pop();
   stk.pop();
   cout<<stk.isempty()<<endl;
   cout<<stk.getTop()<<endl;
   stk.print();
   stk.pop();
   stk.print();


   return 0;
}