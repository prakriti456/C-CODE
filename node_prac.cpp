#include<iostream>
using namespace std;
class Node{
    public:
    int value;
Node* next;//pointer to next node
public:
    Node(int data){
        value=data;
        next=NULL;
    }};
    void inserthead(Node* &head,int value){
        Node* new_node=new Node(value);
        new_node->next=head;
        head=new_node;}
void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->value<<"->";
            temp=temp->next;
}
    cout<<"null"<<endl;}
int main(){
        Node* head= NULL;
     Node* n1=new Node(20);
        Node* n2=new Node(30);
        Node* n3=new Node(40);
        n1->next=n2;
        n2->next=n3;
           head=n1;
           display(head);
          inserthead(head,10);
          display(head);
    }