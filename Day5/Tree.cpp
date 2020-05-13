#include <iostream>
using namespace std;


struct node{
    int data;
    struct node * right;
    struct node * left;
};
void traverse (node *);

int main()
{
        struct node n;
    n.data = 10;
    n.right = NULL;
    n.left = NULL;
 
        struct node n1;
    n1.data = 20;
    n1.left = NULL;
    n1.right = NULL;

    n1.left = &n;
    struct node n2;
    n2.data = 30;
    n2.right = NULL;
    n2.left = NULL;
    n1.right = &n2;

    struct node n3;
    n3.data = 40;
    n3.left = NULL;
    n3.right = NULL;
    n2.right = &n3;

/*  cout << n.data << endl;
cout << n1.data << endl;
cout << n2.data << endl;
cout << n3.data << endl;
 
struct node *temp;
 temp->right=NULL;
 temp->left=NULL;

 while (temp != NULL)
 {
     cout << temp-> data << endl;
     temp= temp->right;
   temp -> left = temp ->left->left;

 }
 */
 traverse(&n1);

return 0;
}

void traverse (node *root)
{    
    if(root != NULL)
    {
        cout << "Calling traverse : " << endl;
    traverse(root->left);
    cout << root-> data <<endl ;
    traverse(root->right); 

    }
}
