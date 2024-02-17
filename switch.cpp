#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
}
void deleteBeforeElement(Node *&a) // function to delete the node before a particular element in the list
{
    Node *ptr = a;
    Node *preptr = NULL;
    Node *temp = a;
    int b;
    cout << "Enter element to delete a node before it: ";
    cin >> b;
    if (a == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else
    {
        while (ptr->data != b)
        {
            temp = preptr;
            preptr = ptr;
            ptr = ptr->next;
        }
        if (preptr == NULL) // if first node is selected, print error message
        {
            cout << "Element not found" << endl;
        }
        else
        {
            if (preptr == a)
            {
                a = ptr;
            }  
            else
            {
                temp->next = ptr;
            }
            delete preptr;
        }
    }
}

void deleteAfterElement(Node *&a) // function to delete the node after a particular element in the list
{
    Node *ptr = a;
    Node *preptr = a;
    Node *temp = NULL;
    int b;
    cout << "Enter element to delete node after: ";
    cin >> b;
    ptr = a;
    if (a == NULL)
    {
        cout << "Underflow" << endl;
        return;
    }
    else
    {
        while (ptr->data != b)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            if (ptr->next == NULL)
            {
                cout << "No element to delete" << endl;
            }
            else
            {
                preptr = ptr;
                temp = ptr->next;
                preptr->next = temp->next;
                delete temp;
            }
        }
    }
}
int main()
{
    
}