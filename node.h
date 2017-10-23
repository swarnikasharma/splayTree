#include <iostream>
class node
{
	/**data members**/
	public:
	int val;	
	node *left;
	node *right;
	
	/**constructors**/
	node()
	{
		val=0;
		left=NULL;
		right=NULL;
	}
	node(int i,node *l=NULL,node *r=NULL)
	{
		val=i;
		left=l;
		right=r;
	}
	
}*root;

