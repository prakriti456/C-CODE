#include <iostream>
#include<math.h>
using namespace std;

class Node {
public:
    int value;
    Node* next; // pointer to next node

    Node(int data) {
        value = data;
        next = NULL;
    }
};
void bti(int n,Node* head){
    int ans=0;
    Node* temp=head;
    for(int i=0;i<n;i++){
        ans=ans+(temp->value)*pow(2,i);
        temp=temp->next;
        
        
    }
    cout<<ans;
    



}
int main(){
    Node* head=NULL;
    Node* n1 = new Node(0);
    Node* n2 = new Node(1);
    Node* n3 = new Node(0);
    Node* n4 = new Node(1);
       n1->next = n2;
    n2->next = n3;
    n3->next = n4;
     head = n1;
     bti(4,head);
}