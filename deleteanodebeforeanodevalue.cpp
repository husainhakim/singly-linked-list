#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
int main() {
    Node* n1 = new Node();
    Node* n2 = new Node();
    Node* n3 = new Node();
    Node* n4 = new Node();

    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    n2->next = n3;
    n3->data = 3;
    n3->next = n4;
    n4->data = 4;
    n4->next = NULL;

    cout << "Before deleting " << endl;
    Node* ptr = n1;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    int value=2;
    ptr=n1;
    Node* preptr=ptr;
    while(ptr!=NULL)
    {
        while(ptr->data!=value)
        {
            preptr=ptr;
            preptr=preptr->next;
        }
    }
    Node* temp;
    temp=ptr->next;
    preptr->next=temp->next;
    delete temp;
    cout<<"After deleting"<<endl;
    Node* start=n1;
    while(start!=NULL)
    {
        cout<<start->data<<endl;
        start=start->next;
    }
    return 0;
}

// Node *ptr = a;
//     Node *preptr = a;
//     Node *temp = NULL;
//     int b;
//     cout << "Enter element to delete node after: ";
//     cin >> b;
//     ptr = a;
//     if (a == NULL)
//     {
//         cout << "Underflow" << endl;
//         return;
//     }
//     else
//     {
//         while (ptr->data != b)
//         {
//             preptr = ptr;
//             ptr = ptr->next;
//         }
//         if (ptr == NULL)
//         {
//             cout << "Element not found" << endl;
//         }
//         else
//         {
//             if (ptr->next == NULL)
//             {
//                 cout << "No element to delete" << endl;
//             }
//             else
//             {
//                 preptr = ptr;
//                 temp = ptr->next;
//                 preptr->next = temp->next;
//                 delete temp;
//             }
//         }
//     }