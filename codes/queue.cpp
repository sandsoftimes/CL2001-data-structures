#include<iostream>
using namespace std;
struct nodeType{
    int data;
    nodeType *link;
};
class queue{
    private:
    nodeType *front;
    nodeType *rear;
    nodeType *newnode;
    public:
    	queue(){
    		front=NULL;
    		rear=NULL;
		}
    void inqueue();
    void dequeue();
    void isEmpty();
    void print();

};

void queue::inqueue(){
    newnode = new nodeType;
    int num;
    cout<<"Enter the number you want to put in the node of queue:";
    cin>>num;
    newnode->data=num;
    newnode->link=NULL;
    if(front==NULL){
        front=newnode;
        rear=newnode;

    }
    else{
        rear->link=newnode;
        rear=newnode;
    }
}
void queue::dequeue(){
    nodeType *extra;
    extra=front;
    front=front->link;
    delete extra;


}
void queue::print(){
    nodeType *temp;
    temp=front;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->link;
    }
    // cout<<temp->data<<endl;
}


int main(){
    queue s1;
    s1.inqueue();
    s1.inqueue();
    s1.dequeue();
	s1.print();
    // s1.print();

}
