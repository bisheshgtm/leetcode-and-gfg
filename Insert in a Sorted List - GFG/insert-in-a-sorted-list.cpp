//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node *newnode=new Node(data);
        if (data<=head->data){
            
            newnode->next=head;
            head=newnode;
        }
        else {
            struct Node *ptr=head;
            Node *qtr=NULL;
            while(ptr->next!=NULL){
               
                qtr=ptr;
                ptr=ptr->next;
                if (ptr->next==NULL && data>ptr->data){
                    ptr->next=newnode;
                    newnode->next=NULL;
                    break;
                }
                if (data<=ptr->data && data>qtr->data){
                    qtr->next=newnode;
                    newnode->next=ptr;
                    break;
                }
                
                
            }
            return head;
        }
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends