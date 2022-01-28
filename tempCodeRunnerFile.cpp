#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    struct node*next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertion(node* &head,int val)
{
    node* newnode = new node(val);
    newnode -> data = val;
    newnode -> next = head;
    head = newnode;
}
int count(node* head)
{
    int count = 0;
    node* curr = head;
    while(curr != NULL)
    {
        count++;
       curr = curr->next;
    }
    return count;
}
void display(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<"->";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head = NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    insertion(head,5);
    display(head);
    count(head);





return 0;
}