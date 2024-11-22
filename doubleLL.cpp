#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data ;
    Node*next;
    Node*back;
    public:
    Node(int data1, Node*next1, Node*back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node*convertArrtoLL(vector<int>&arr)
{
    Node* head= new Node (arr[0]);
    Node *prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node (arr[i],nullptr,prev);
        prev->next =temp;
        prev=temp;
    }
    return head;
}
void print(Node*head)
{
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout << endl;
}

Node* deleteHead(Node*head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node*deleteTail(Node*head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->back->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
Node* deletek(Node* head,int k)
{
    if(head==NULL){
        return NULL;
    }
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node*front=temp->next;
    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deleteTail(head);
    }

    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
Node* insertHead(Node*head,int val)
{
    Node*temp=new Node(val,head,nullptr);
    head->back=temp;
    return temp;
}
Node* insertTail(Node*head,int val){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode= new Node(val,nullptr,temp);
    temp->next=newNode;
    return head;
}
Node*insertTailBefore(Node*head,int val){
    Node*tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev=tail->back;
    Node*temp=new Node(val,tail,prev);
    prev->next=temp;
    tail->back=temp;
    return head;
}
Node*insertBeforeK(Node*head,int val,int k){
    if(head==NULL){
    return NULL;
    }
    if(k==1){
        return insertHead(head,val);
    }
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node*prev=temp->back;
    Node* newNode =new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}


int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    vector<int>arr={15,3,4,5};
    Node* head= convertArrtoLL(arr);
    // head=deleteHead(head);
    //  head=deleteTail(head);
    // head=deletek(head,4);
    // head=insertHead(head,10);
    // head=insertTail(head,10);
    //head=insertTailBefore(head,10);
    head=insertBeforeK(head,100,4);
    print(head);
    return 0;
}