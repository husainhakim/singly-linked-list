// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
// };
// int main() {
//     Node* n1 = new Node();
//     Node* n2 = new Node();
//     Node* n3 = new Node();
//     Node* n4 = new Node();

//     n1->data = 1;
//     n1->next = n2;
//     n2->data = 2;
//     n2->next = n3;
//     n3->data = 3;
//     n3->next = n4;
//     n4->data = 4;
//     n4->next = NULL;

//     cout << "Before deleting " << endl;
//     Node* ptr = n1;
//     while (ptr != NULL) {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }
// int value=2;
// ptr=n1;
// Node* preptr=ptr;
// while(ptr!=NULL)
// {
//     if(ptr->data==value)
//     {
//         break;
//     }
//     else{
//         preptr=ptr;
//         ptr=ptr->next;
//     }
// }
// Node* temp=ptr->next;
// ptr->next=temp->next;
// ptr=n1;
// cout<<"After deleting"<<endl;
// while(ptr!=NULL)
// {
//     cout<<ptr->data<<endl;
//     ptr=ptr->next;
// }
//}
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
    Node* n5 = new Node();

    n1->data = 1;
    n1->next = n2;
    n2->data = 2;
    n2->next = n3;
    n3->data = 3;
    n3->next = n4;
    n4->data = 4;
    n4->next = n5;
    n5->data = 5;
    n5->next = NULL;

    cout << "Before deleting " << endl;
    Node* ptr = n1;
    while (ptr != NULL) {
        cout << ptr->data << endl;
        ptr = ptr->next;
    }

int value=3;
}

    


    