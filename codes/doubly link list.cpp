#include<iostream>
using namespace std;
struct nodetype{
	int data;
	nodetype *next;
	nodetype *previous;
	
};
class link_list{
	private:
		nodetype *first,*last;
		public:
			link_list(){
				first=NULL;
				last=NULL;
			}
			void build_link_list(int num);
			void print1();
			void print();
};
void link_list::build_link_list(int num){


	nodetype*newnode,*newnode_lag;
	newnode=new nodetype;
	newnode->data=num;
	newnode->next=NULL;
	if(first==NULL){
		first=newnode;
		last=newnode;
	    first->previous=NULL;
	}
	else{
		last->next=newnode;
		newnode_lag=last;
		last=newnode;
		last->previous=newnode_lag;
		
	}

}
void link_list::print1() {
	nodetype *temp;
	temp=last;

	while(temp!=NULL){
		cout<<temp->data<<" - ";
		temp=temp->previous;
		
	}
}
void link_list::print() {
	nodetype *temp;
	temp=first;

	while(temp!=NULL){
		cout<<temp->data<<" - ";
		temp=temp->next;
		
	}
}
int main(){
link_list l1;
l1.build_link_list(10);
l1.build_link_list(20);
l1.build_link_list(30);
//	l1.print(); //remove comment and this english to print through first
l1.print1();//print through last pointer

}

