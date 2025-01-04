#include<bits/stdc++.h>
using namespace std;

struct node{
   int key;
   int data;
   node *next;

   node(int key, int data){
      this->key = key;
      this->data = data;
      this->next = NULL;
   }
};

class Map{
   int SIZE;
   vector<node*> table;

   int hash(int key){
      return key % SIZE;
   }
   public:
      Map(int size){
         SIZE = size;
         table.resize(SIZE, NULL);
      }
      void insert(int key,int val){
         remove(key);
         int index = hash(key);
         node *temp = table[index];
         if(temp == NULL){
            table[index] = new node(key, val);
            return;
         }else{
            while(temp->next != NULL){
               temp = temp->next;
            }
            temp->next = new node(key, val);
         }
      }
      int get(int key){
         int index = hash(key);
         node *temp = table[index];
         while(temp){
            if(temp->key == key){
               return temp->data;
            }
         }
         return -1;
      }
      void remove(int key){
         int index = hash(key);
         node *temp = table[index];
         if(!temp) return;
         if(temp->key == key){
            table[index] = temp->next;
            delete temp;
            return;
         }
         while(temp->next){
            if(temp->next->key == key){
               node *delNode = temp->next;
               temp->next = delNode->next;
               delete delNode;
               return;
            }
         }
      }
};

int main()
{
   Map mp(10);
   mp.insert(1, 10);
   mp.insert(2, 20);
   mp.insert(3, 30);
   cout<< mp.get(1) <<endl; // 10
   cout<< mp.get(2) <<endl; //  20
   cout<< mp.get(3) <<endl; // 30
   mp.remove(2);
   mp.insert(2,40);
   mp.insert(1,20);
   cout<< mp.get(1) << endl; // 20
   cout<< mp.get(2) << endl; // 40

   return 0;
}