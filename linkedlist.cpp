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


int main(){
    #ifndef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout); 
    #endif
    vector<int>arr={15,3,4,5};
    Node*head=convertArrtoLL(arr);
    cout << head->data;
return 0;
}
