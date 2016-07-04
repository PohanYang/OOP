// ex3-2.cpp
#include <iostream>
using namespace std;

struct Node
{
        int data;
        Node *next;
};

//global variable root is used to record the head of link list
Node* root = NULL;

int InsertNode(int data){
    Node* temp = new Node;
	Node* search = new Node;
	temp->data=data;
	temp->next=NULL;
	if(root==NULL){
		root=temp;
	}else{
		search=root;
		while(search->next!=NULL){
			search=search->next;
		}
		search->next=temp;
	}
}
int DeleteNode(int data){
	Node* ds = root;
	if(root->data==data){
		root = ds->next;
	}else{
		while(ds!=NULL){
			if(ds->next->data==data){
				ds->next=ds->next->next;
				return 0;
			}
			ds=ds->next;
		}
		return false;
	}
}
int Display(){
	Node* walk = root;
	while(walk!=NULL){
		walk->next==NULL?cout<< walk->data:cout << walk->data << "->";
		walk=walk->next;
	}
	cout << endl;
}

int main()
{
        size_t i = 0;
        while (1)
        {
                cout << "Please select an option:" << endl
                     << "1.Insert a node" << endl
                     << "2.Delete a node" << endl
                     << "3.Display the list" << endl
                     << "4.End" << endl;
                cin >> i;
                int data;
                switch(i)
                {
                        case 1:
                                cout << "Please enter the number:" << endl;
                                cin >> data;
                                InsertNode(data);
                                break;
                        case 2:
                                cout << "Please enter the number:" << endl;
                                cin >> data;
                                if ( !DeleteNode(data) )
                                        cout << "Failed to delete node " << data << endl;
                                break;
                        case 3:
                                Display();
                                break;
                        case 4:
                                return 0;
                        default:
                                break;
                }
        }
}
