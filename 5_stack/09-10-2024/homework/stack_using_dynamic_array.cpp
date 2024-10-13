#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
        vector<int> arr;
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
            arr.push_back(val);
            ++top;
        }
        int pop(){
            if(this->isempty()){
                cout<<"stack underflow"<<endl;
                return -1;
            }
            int val = arr[top--];
            arr.pop_back();
            return val;
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
   cout<<stk.pop()<<endl;
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