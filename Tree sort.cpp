#include<bits/stdc++.h>
using namespace std;
struct node{
   int data;
   node*left=NULL;
   node*right=NULL;


};
node*root=NULL;

   void push(struct  node *tmp,int k){
   if(tmp->data<k){
      if(tmp->right==NULL){
         node *new_n=new node( );
         new_n->data=k;
         new_n->left=NULL;
         new_n->right=NULL;
         tmp->right=new_n;
         return;

      }
      else push(tmp->right,k);
   }
   else{


         if(tmp->left==NULL){
               node*new_n=new node( );
            new_n->data=k;
           new_n->left=NULL;
           new_n->right=NULL;
            tmp->left=new_n;
            return;
         }

      else push(tmp->left,k);

   }


   }

   void show( struct node* root){
   if(root!=NULL){
      show(root->left);
      cout<<root->data<<" ";
      show(root->right);
   }
   else return ;
   }


int main( ){

   int n;
   cout<<"total number of nodes: "<<endl;
   cin>>n;
   int x;
   cout<<"root node value: "<<endl;
   cin>>x;
   node*tmp=new node( );
  tmp->data=x;
   tmp->left=NULL;
  tmp->right=NULL;
  root=tmp;
   n--;
   while(n--){
     cout<<"enter push valu: "<<endl;
      cin>>x;
      push(root,x);
   }
   cout<<"sorted tree: "<<endl;
      show(root);



   }


