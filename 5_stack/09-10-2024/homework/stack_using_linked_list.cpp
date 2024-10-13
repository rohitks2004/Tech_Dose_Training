#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node *next;
};


class Stack{
    private:
        Node *top ;
    public:
        Stack(){
            this->top = nullptr;
        }
        bool isempty(){
            return this->top == nullptr;
        }
        int getTop(){
            if(this->isempty()){
                return -1;
            }
            return (this->top)->val;
        }
        void push(int val){
           Node* nn = new Node;
           nn->val = val;
           nn->next = top;
           top = nn;
        }
        int pop(){
            if(this->isempty()){
                cout<<"stack underflow"<<endl;
                return -1;
            }
            Node* val = top;
            top = top->next;
            int data = val->val;
            delete val;
            return data;
        }
        
        void print(){
            if(this->isempty()){
                cout<<"stack is empty"<<endl;
            }
            Node *temp = top;
            while(temp){
                cout<<temp->val<<" ";
                temp = temp->next;
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