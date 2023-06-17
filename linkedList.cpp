#include<iostream>
using namespace std;


struct node
{
    int data;
    node* next;
};

class SinglyLinkList{
    public:
        node* head;
        SinglyLinkList();
        void insert(int data);
        void print();
        
}

void SinglyLinkList::insert(int data){
    node* nd=new node(data);
    if(head==NULL){
        head=nd;
        return;
    }
    nd->next=head;
    head=nd;
}

SinglyLinkList::SinglyLinkList(){
    this->head=NULL;
}

void SinglyLinkList::print(){
    cout<<"Singly Link List"<<endl;
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    SinglyLinkList sll;
    

}
