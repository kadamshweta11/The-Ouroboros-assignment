#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class Linked_list
{
	node *head;
	node *temp;
	public:
		Linked_list()
		{
		head=NULL;	
		}
	void add_node(int value)
	{
		node *temp=new node;
		temp->data=value;
		temp->next=NULL;
		if(head==NULL)
		{
			head=temp;
		}
		else
		{
		node *temp1=head;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;	
		}
	}
	
	void delete_last()
	{
		node *temp1;
		temp1=head;
		cout<<"\nelements displayed after deletion are=";
		while(temp1->next!=NULL)
		{
			cout<<temp1->data<<"\t";
			temp1=temp1->next;
		}
//		
	}
	void display()
	{
		node *temp1;
		temp1=head;
		cout<<"\nelements displayed before deletion are=";
		while(temp1!=NULL)
		{
			cout<<temp1->data<<"\t";
			temp1=temp1->next;
		}
	}
};
int main()
{
	Linked_list obj;
	obj.add_node(24);
	obj.add_node(44);
	obj.add_node(14);
	
	obj.display();
	obj.delete_last();
	return 0;
}
