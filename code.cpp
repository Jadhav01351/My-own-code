#include<iostream>
using namespace std;


class node{
	public:
		
		node*next;
		int data;
		
	     node(int val)
	     {
	     	data =val;
	     	next=NULL;
		 }
		 
		 
	
		 
		
};
 int insert(node*head, int val)
		 {
		    node*n=new node(val);
		    
		    if(head==NULL)
		    {
		    	head=n;
		    	
			}
		    
		    node*temp=head;
		    while(temp->next!=NULL)
		    {
		    	temp=temp->next;
			}
			temp->next=n;
		 }

int main()
{
	
	node*head=NULL;
	int m;
	cin>>m;
	
	
      int k[]={3,2,9,6,11,13,7,12};
      
      int l=sizeof(k)/sizeof(k[0]);//to find size
      
      
	
//	int h(k)=((2*k)+3);//key function
	
	int hash[m];//hash table
	
	for(int i=0;i<m;i++)
	{
		hash[i]=-1;//initialy hash table is 0
	}
	int key_loc[l]={};
    for(int i=0;i<l;i++)
    {
    		 key_loc[i]=((2*k[i])+3)%m;//key location
    			
			   	
			   			hash[key_loc[i]]=k[i];
//			   			if(hash[i]!=-1 && hash[key_loc[i]]!=-1 )
//			   			{
//			   				hash[i]=insert(head,k[i]);
//						}
			   	
				

      	
   	}
   	
   	for(int i=0;i<m;i++)
   	{
   		cout<<hash[i]<<" ";
	}
   	
   
   	
   
	
	
}
