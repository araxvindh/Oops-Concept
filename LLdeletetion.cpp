#include <bits/stdc++.h>
using namespace std;
struct Node
{   
    public:
    int data;
    Node*next;
    public:
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};

Node* convertArrtoLL(vector<int>&arr)
{
    Node* head= new Node (arr[0]);
    Node *mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node (arr[i]);
        mover->next =temp;
        mover=temp;
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
    if(head==NULL) return head;
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node*deleteTail(Node*head)
{
    if (head == NULL || head->next==NULL) return NULL;
    Node*temp = head;
    while(temp->next->next!= NULL){
        temp=temp->next;
    } delete temp->next;
    temp->next=nullptr;
    return head;
}
Node*deleteK(Node*head,int val)
{
    if(head==NULL) return head;
    if(val==1){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    int count=0;
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        count++;
        if(count==val){
        prev->next=prev->next->next;
        free(temp);
        return head;
    }
    prev=temp;
    temp=temp->next;
    }
    return head;
}
Node*deleteELe(Node*head,int val)
{
    if(head==NULL) return head;
    if(head->data==val){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    Node*temp=head;
    Node*prev=NULL;
    while(temp!=NULL){
        if(temp->data==val){
        prev->next=prev->next->next;
        free(temp);
        return head;
    }
    prev=temp;
    temp=temp->next;
    }
    return head;
}

Node*insertHead(Node*head,int val)
{
    Node*temp= new Node(val);
    temp->next=head;
    head=temp;
    return head;
}

Node*insertLast(Node*head, int val)
{
    Node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
    return head;
}
Node*insertK(Node*head,int val,int k)
{
    if(k==1){
        Node*newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        return newNode;
    }
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        
        count++;
        if(count==k-1){
            Node*newNode=new Node(val);
            newNode->next=temp->next;
            temp->next=newNode;
            return head;
        }temp=temp->next;
    }return head;
}



int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    vector<int>arr={15,3,4,5};
    Node*head=convertArrtoLL(arr);
    //head= deleteHead(head);
    //head= deleteTail(head);
    //head=deleteELe(head,3);
    // head= insertHead(head,100);
    //head= insertLast(head,100);
    head=insertK(head,100,3 );
    print(head);
return 0;
}
