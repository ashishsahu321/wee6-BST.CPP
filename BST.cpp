#include<iostream>
using namespace std;
class node{
public:
//data part 
int data;
//pointers point to next nodes
node*left;
node*right;
//constructor
node(int value){
data=value;
left=NULL;
right=NULL;
}
};

//class BST(binary serch tree)
class BST{
public:
//root point to first node element 
node*root;
//constructor
BST(){
root=NULL;
}
//function to element in binary serch tree
void insert1(node*current,int value){
if(root == NULL) {root=new node(value);}
else if(value<current->data){
if(current->left==NULL) current->left=new node(value);
else insert1(current->left,value);
}
else if(value>current->data){
if(current->right==NULL) current->right=new node(value);
else insert1(current->right,value);
}
}
void insert(int value){
  insert1(root,value);
}
//function to inorder display of elements of 
void display1(node*current){
if(root==NULL)return;
cout<<current->data;
display1(current->left);
display1(current->right);
}
void predisplay(){
display1(root);
}
bool search2(node*current,int value){
	if(value==current->data && root!=NULL) {return true;}
	else if(value>current->data){return search2(current->right,value);}
	else if(value<current->data){return search2(current->left,value);}	
}
bool search1(int value){
	return search2(root,value);
	}
void search(int value){
	if(search1(value)==1){
		cout<<"the element is present  ";
		}
	else if (search1(value)==0){
		cout<<"element is not present  ";
		}
	}
};

int main(){
	BST b;
	b.insert(4);
	b.insert(2);
	b.insert(5);
	b.predisplay();
	b.search(5);
	return 0;
	}

