// #include <stdio.h>
// #include <stdlib.h>
 
// #define MAX 5
 
// void insert_by_priority(int);
// void delete_by_priority(int);
// void create();
// void check(int);
// void display_pqueue();
 
// int pri_que[MAX];
// int front, rear;
 
// void main()
// {
//     int n, ch;
 
//     printf("\n1 - Insert an element into queue");
//     printf("\n2 - Delete an element from queue");
//     printf("\n3 - Display queue elements");
//     printf("\n4 - Exit");
 
//     create();
 
//     while (1)
//     {
//         printf("\nEnter your choice : ");    
//         scanf("%d", &ch);
 
//         switch (ch)
//         {
//         case 1: 
//             printf("\nEnter value to be inserted : ");
//             scanf("%d",&n);
//             insert_by_priority(n);
//             break;
//         case 2:
//             printf("\nEnter value to delete : ");
//             scanf("%d",&n);
//             delete_by_priority(n);
//             break;
//         case 3: 
//             display_pqueue();
//             break;
//         case 4: 
//             exit(0);
//         default: 
//             printf("\nChoice is incorrect, Enter a correct choice");
//         }
//     }
// }
 
// /* Function to create an empty priority queue */
// void create()
// {
//     front = rear = -1;
// }
 
// /* Function to insert value into priority queue */
// void insert_by_priority(int data)
// {
//     if (rear >= MAX - 1)
//     {
//         printf("\nQueue overflow no more elements can be inserted");
//         return;
//     }
//     if ((front == -1) && (rear == -1))
//     {
//         front++;
//         rear++;
//         pri_que[rear] = data;
//         return;
//     }    
//     else
//         check(data);
//     rear++;
// }
 
// /* Function to check priority and place element */
// void check(int data)
// {
//     int i,j;
 
//     for (i = 0; i <= rear; i++)
//     {
//         if (data >= pri_que[i])
//         {
//             for (j = rear + 1; j > i; j--)
//             {
//                 pri_que[j] = pri_que[j - 1];
//             }
//             pri_que[i] = data;
//             return;
//         }
//     }
//     pri_que[i] = data;
// }
 
// /* Function to delete an element from queue */
// void delete_by_priority(int data)
// {
//     int i;
 
//     if ((front==-1) && (rear==-1))
//     {
//         printf("\nQueue is empty no elements to delete");
//         return;
//     }
 
//     for (i = 0; i <= rear; i++)
//     {
//         if (data == pri_que[i])
//         {
//             for (; i < rear; i++)
//             {
//                 pri_que[i] = pri_que[i + 1];
//             }
 
//         pri_que[i] = -99;
//         rear--;
 
//         if (rear == -1) 
//             front = -1;
//         return;
//         }
//     }
//     printf("\n%d not found in queue to delete", data);
// }
 
// /* Function to display queue elements */
// void display_pqueue()
// {
//     if ((front == -1) && (rear == -1))
//     {
//         printf("\nQueue is empty");
//         return;
//     }
 
//     for (; front <= rear; front++)
//     {
//         printf(" %d ", pri_que[front]);
//     }
 
//     front = 0;
// }


    // WAP Write the following menu driven program for the binary search tree
// ----------------------------------------------------------------
// Binary Search Tree Menu
// ----------------------------------------------------------------
// 0. Quit
// 1. Create (Insert a BST as per user entered key value.)
// 2. In-Order Traversal
// 3. Pre-Order Traversal
// 4. Post-Order traversal
// 5. Search an element
// 6. Find Smallest Element
// 7. Find Largest Element
// 8. Deletion of a BST as per user entered key value.
// 9. Deletion of the whole Tree
// ----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
 
typedef struct BST
{
    int data;
    struct BST *left, *right;
} BST;
 
void insertBST(BST **root, int data)
{
    BST *newBST = (BST *)malloc(sizeof(BST));
    newBST->data = data;
    newBST->left = newBST->right = NULL;
    if (!(*root))
        *root = newBST;
    else
    {
        BST *prev = NULL, *tmp = *root;
        while (tmp)
        {
            prev = tmp;
            if (tmp->data > data)
                tmp = tmp->left;
            else if (tmp->data < data)
                tmp = tmp->right;
        }
        if (prev->data > data)
            prev->left = newBST;
        else
            prev->right = newBST;
    }
}
 
void createBST(BST **root)
{
    int choice = 1;
    do
    {
        int data = 0;
        printf("\nEnter a number to enter in BST: ");
        scanf("%d", &data);
        insertBST(root, data);
        printf("\nPress 1 to enter a value to BST or 0 to exit: ");
        scanf("%d", &choice);
    } while (choice == 1);
}
 
void Inorder(BST *root)
{
    if (!root)
        return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}
 
void Preorder(BST *root)
{
    if (!root)
        return;
    printf("%d ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}
 
void Postorder(BST *root)
{
    if (!root)
        return;
    Postorder(root->left);
    Postorder(root->right);
    printf("%d ", root->data);
}
 
void search(BST *root, int data)
{
    BST *tmp = root;
    while (tmp)
    {
        if (tmp->data > data)
            tmp = tmp->left;
        else if (tmp->data < data)
            tmp = tmp->right;
        else
        {
            printf("\n%d found in BST!\n", data);
            return;
        }
    }
    printf("\nElement not found in BST!\n");
}
 
void findSmallest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
    {
        BST *tmp = root;
        while (tmp->left)
            tmp = tmp->left;
        printf("\nSmallest element in BST = %d\n", tmp->data);
    }
}
 
void findLargest(BST *root)
{
    if (root == NULL)
        printf("\nBST EMPTY!\n");
    else
    {
        BST *tmp = root;
        while (tmp->right)
            tmp = tmp->right;
        printf("\nLargest element in BST = %d\n", tmp->data);
    }
}
 
BST* getMinimumKey(BST *curr)
{
    while (curr->left != NULL)
        curr = curr->left;
    return curr;
}
 
void searchKey(BST **curr, int key, BST **parent)
{
    while (*curr != NULL && (*curr)->data != key)
    {
        *parent = (*curr);
        if (key < (*curr)->data)
            (*curr) = (*curr)->left;
        else
            (*curr) = (*curr)->right;
    }
}
 
void deleteBSTKey(BST **root, int key)
{
    BST *parent = NULL;
    BST *curr = *root;
 
    searchKey(&curr, key, &parent);
 
    if (curr == NULL)
        return;
 
    if (curr->left == NULL && curr->right == NULL)
    {
        if (curr != *root)
            if (parent->left == curr)
                parent->left = NULL;
            else
                parent->right = NULL;
        else
            root = NULL;
        free(curr);
    }
 
    else if (curr->left && curr->right)
    {
        BST *successor = getMinimumKey(curr->right);
        int val = successor->data;
        deleteBSTKey(root, successor->data);
        curr->data = val;
    }
 
    else
    {
        BST *child = (curr->left) ? curr->left : curr->right;
        if (curr != *root)
            if (curr == parent->left)
                parent->left = child;
            else
                parent->right = child;
        else
            *root = child;
        free(curr);
    }
}
 
void _deleteTree(BST *root)
{
    if (root == NULL)
        return;
    _deleteTree(root->left);
    _deleteTree(root->right);
    free(root);
}
 
void deleteTree(BST **root)
{
    _deleteTree(*root);
    *root = NULL;
}
 
int main()
{
    BST *root = NULL;
    while (1)
    {
        int choice;
        printf("\n----------------------------------------\n"
               "\tBinary Search Tree Menu\n"
               "----------------------------------------\n"
               "0. Quit\n"
               "1. Create\n"
               "2. In-Order Traversal\n"
               "3. Pre-Order Traversal\n"
               "4. Post-Order traversal\n"
               "5. Search\n"
               "6. Find Smallest Element\n"
               "7. Find Largest Element\n"
               "8. Deletion of a BST as per user entered key value\n"
               "9. Deletion of Tree\n"
               "----------------------------------------\n"
               "Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
            break;
        case 1:
            createBST(&root);
            break;
        case 2:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("In-order traversal: ");
            Inorder(root);
            printf("\n");
            break;
        case 3:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Pre-order traversal: ");
            Preorder(root);
            printf("\n");
            break;
        case 4:
            if (root == NULL)
            {
                printf("\nBST EMPTY!\n");
                break;
            }
            printf("Post-order traversal: ");
            Postorder(root);
            printf("\n");
            break;
        case 5:
        {
            int d;
            printf("Enter number to search: ");
            scanf("%d", &d);
            search(root, d);
        }
        break;
        case 6:
            findSmallest(root);
            break;
        case 7:
            findLargest(root);
            break;
        case 8:
        {
            int key;
            printf("Enter key to delete: ");
            scanf("%d", &key);
            deleteBSTKey(&root, key);
            printf("\nKey with value %d deleted successfully!\n", key);
        }
        break;
        case 9:
            deleteTree(&root);
            break;
        default:
            printf("\nEnter a valid choice!\n");
            break;
        }
    }
    return 0;
}
 
