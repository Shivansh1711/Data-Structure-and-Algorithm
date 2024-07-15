#include <iostream>
using namespace std;

class Link {
public:
    int data;
    Link* next;

    Link() {}

    Link(int val) {
        data = val;
        next = nullptr;
    }

    Link(int val, Link* head) {
        data = val;
        next = head;
    }
};

Link* start = nullptr;
Link* node;
Link* current;

Link* Create() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        node = new Link();
        cin >> node->data;
        node->next=NULL;
        if (start == nullptr) {
            start = node;
            current = node;
        } else {
            current->next = node;
            current = node;
        }
    }
    return start;
}

Link* InsertAtBegin(Link* head, int val) {
    if (head == nullptr) {
        return new Link(val);
    } else {
        Link* temp = new Link(val, head);
        head = temp;
    }
    return head;
}

void Print(Link* head) {
    Link* ptr = head;
    while (ptr != nullptr) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    start = Create();
    cout << "Enter a value to insert at the beginning: ";
    int val;
    cin >> val;
    start = InsertAtBegin(start, val);
    Print(start);
    return 0;
}
