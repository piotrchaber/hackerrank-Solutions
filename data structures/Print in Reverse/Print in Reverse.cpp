// github.com/piotrchaber

void reversePrint(SinglyLinkedListNode* head) {
    if(head == nullptr) return;
    reversePrint(head->next);
    std::cout << head->data << std::endl;
}