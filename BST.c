#include<stdio.h>
#include<stdlib.h>

typedef struct bst
{
	int data;
	struct bst*left,*right;
}node;
void traverse_inorder(node*q)
{
	if(q!=NULL)
	{
	traverse_inorder(q->left);
	printf("%d\t",q->data);
	traverse_inorder(q->right);
    }
}
	
void insert(node**r,int num)
{
	node*temp,*ptr;
	temp=*r;
	
	if(temp==NULL)
	{
	ptr=(node*)malloc(sizeof(node));
			ptr->data=num;
			ptr->left=NULL;
			ptr->right=NULL;
			*r=ptr;
		}
	else
	{
		if(num>temp->data)
		{
			insert(&temp->right,num); 
			
		}
				else
				{
					insert(&temp->left,num);
				}
	}
}
int search_bst(node*q)
{
	if(q==NULL)
	return -1;
	else
	{
		if(temp->data==num)
		return 1;
		else
		{
			if(num>q->data)
			{
				search_bst(q->right,num);
			}
			else
			{
				search_bst(q->left,num);
			}
		}
	}
}
void search_node(node**x,node*root,node**parent,node**xsucc,int num,int*f)
{
	node*temp;
	temp=root;
	if(temp==NULL)
	return;
	if(temp->data==num)
	{
	*f=1;
    *x=temp;
	return;	

	}
	*parent=temp;
	while(temp!=NULL)
	{
if(temp->data==num)
	{
	*f=1;
    *x=temp;
	return;	
		if(num>temp->data)
		temp=temp->right;
		else
		temp=temp->left;
	}
}
	
				

void delete(node**q,int num)
{
	node*temp,*parent,*xsucc,*x;
	int f=0;
	parent=NULL;
	x=NULL;
	temp=*r;
	search_bst(&x,temp,&parent,&xsucc,num,&f);
	if(f==0)
	{
		printf("\nThe given element %d  is not found",num);
		return;
	}
	//x has no child;
		if(x->left==NULL && x->right==NULL)
		{
			if(x->data>parent->data)
			parent->right=NULL;	
	else
	{
		parent->left=x->left;
		free(x);
		//x has left child
		else
		if(x->left!=NULL && x->right==NULL)
		{
			if(x->data>parent->data)
			parent->right=x->left;
			else
			parent->left=x->left;
			free(x);
		}
		//x has right child
		else
		if(x->right!=NULL && x->left==NULL)
		{
			if(x->data>parent->data)
			parent->right=x->right;
			else
			parent->left=x->right;
			free(x);
		}
		//x has both left and right child
		else
		if(x->left!=NULL && x->right!=NULL)
		{
			parent=x;
			xsucc=x->right;
			while(xsucc->left!=NULL)
			{
				parent=xsucc;
				xsucc=xsucc->left;
			}
			if(xsucc->data>parent->data)
			parent->right=NULL;
			else
			parent->left=NULL;
			x->data=succ->data;
			x=xsucc;
		}
			free(x);
}

int main()
{
	
	node*root;
	root=NULL;
	insert(&root,5);
	insert(&root,6);
	insert(&root,7);
	traverse_inorder(root);
	return 0;
	if(search_bst(root 7)==1)
		printf("The number %d is present in the tree",7);
		else
		printf("The number %d is not present in the tree",7);
		return 0;
}




