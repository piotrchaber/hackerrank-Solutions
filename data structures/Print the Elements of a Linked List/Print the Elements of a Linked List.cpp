// github.com/piotrchaber

void printLinkedList(SinglyLinkedListNode* head) {
    while(head) {
        std::cout << head->data << std::endl;
        head = head->next;
    }
}