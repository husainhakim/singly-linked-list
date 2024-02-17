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
//     n1->next = n3;
//     n2->data = 2;
//     n2->next = n3;
//     n3->data = 3;
//     n3->next = n4;
//     n4->data = 4;
//     n4->next = NULL;

//     Node* ptr = n1;

//     cout << "Before insertion:" << endl;
//     while (ptr != NULL) {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }

//     ptr = n1;
//     int value = 3;

    
//     while (ptr != NULL && ptr->data != value) {
//         ptr = ptr->next;
//     }
// Node* n5 = new Node();
//         n5->data = 5;
//     if (ptr != NULL) {
        

//         n5->next = ptr->next;
//         ptr->next = n5;
//     }

    
//     ptr = n1;

//     cout << "After insertion in the node with value 3:" << endl;
//     while (ptr != NULL) {
//         cout << ptr->data << endl;
//         ptr = ptr->next;
//     }


//     return 0;
// }
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
int main()
{
    Node* n1=new Node();
    Node* n2=new Node();
    Node* n3=new Node();
    Node* n4=new Node();
    Node* ptr=n1;
    n1->data=1;
    n1->next=n2;
    n2->data=2;
    n2->next=n3;
    n3->data=3;
    n3->next=n4;
    n4->data=4;
    n4->next=NULL;
    int value=3;
cout<<"Before deleting an element whose node is placed before the node whose value is 3:"<<endl;
while(ptr!=NULL)
{
 if(ptr->data==value)
 {
    break;
 }
 else
 {
    Node* preptr=ptr;
    ptr=ptr->next;
 }
}
}