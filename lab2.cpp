
# include <bits/stdc++.h>

using namespace std;

class node 
{
    public:
	int x;
	int y;
	node * next;
};

void AddFirst(int a,int b,node ** head);
node * DelFirst(node * head);
void Del(int a,int b,node * head);
void Search(int d,node * head);
bool Search(int a,int b,node * head);
int length(node * head);

void AddFirst(int a,int b,node * head)
    {
	node * new_node=(class node*) malloc(sizeof(class node));
	new_node->x=a;
	new_node->y=b;
	new_node->next=*head;
	*head=new_node;
}

  void search(float d,node * head)
      {
	int a,b;
	node * temp= (class node*) malloc(sizeof(class node));
	temp=node** head;
	while(temp!=NULL)
	{
		a=temp->x;
		b=temp->y;
		if((a*a+b*b)<=(d*d))
		{
			cout<<"(a,b)";
		}
		temp=temp->next;
	}
}

node * DelFirst(node * head)
    {
	if(head==NULL)
		return NULL;
	node * temp=head;
	head=head->next;
	delete temp;
	return head;
    }

void Del(int a,int b,node * head)
   {
	node * temp=*head,*prev;
	if (temp != NULL && temp->x == a && temp->y == b) 
    { 
        *head= temp->next;   
        free(temp);               
        return; 
    } 
    while (temp != NULL && (temp->x == a && temp->y == b)) 
    { 
        prev = temp; 
        temp = temp->next; 
    } 
     if (temp == NULL) return; 
     prev->next = temp->next; 
  
    free(temp);  
}

bool Search(int a,int b,node * head){
	 node* current = (class node*) malloc(sizeof(class node));
	 current=head;   
    while (current != NULL)  
    {  
        if (current->x == a && current->y == b)  
            return true;  
        current = current->next;  
    }  
    return false;
}
int length(node * head)
 {
	int i=0;
	node* temp;
	while(temp!=NULL)
	{
		i++;
	}
	return i;
   }

int main()
{
  node* head=NULL;
 int s;
 float d;
 cin>>s;
 while(s--)
  {
    int a,b,c;
   cin>>a;
     if(a==1||3||5)
          {
            cin>>b;
             cin>>c;
          }
    
  switch(a)
   {
   case 1:AddFirst(b,c,&head);
          break;
   case 2:DelFirst(head);
          break;
   case 3:Del(b,c,&head);
          break;
   case 4:search(d,&head);
          break;
   case 5:Search(b,c,head);
          break;
   case 6:length(head);
          break;
    }
   }
   return 0;
 
               }
