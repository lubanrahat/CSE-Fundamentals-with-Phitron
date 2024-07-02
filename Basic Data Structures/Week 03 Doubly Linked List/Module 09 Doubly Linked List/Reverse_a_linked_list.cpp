#include <iostream>

class SinglyLinkedListNode {
public:
    int data;
    SinglyLinkedListNode* next;

    SinglyLinkedListNode(int node_data) {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList {
public:
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;

    SinglyLinkedList() {
        this->head = nullptr;
        this->tail = nullptr;
    }

    void insert_node(int node_data) {
        SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

        if (!this->head) {
            this->head = node;
        } else {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* prev = nullptr;
    SinglyLinkedListNode* current = head;
    SinglyLinkedListNode* next_node = nullptr;

    while (current != nullptr) {
        next_node = current->next;
        current->next = prev;   
        prev = current;         
        current = next_node;
    }

    return prev;
}

void print_linked_list(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int test_cases;
    std::cin >> test_cases;

    while (test_cases--) {
        int n;
        std::cin >> n;
        SinglyLinkedList* ll = new SinglyLinkedList();

        for (int i = 0; i < n; i++) {
            int value;
            std::cin >> value;
            ll->insert_node(value);
        }

        SinglyLinkedListNode* reversed_head = reverse(ll->head);
        print_linked_list(reversed_head);

        delete ll;
    }

    return 0;
}