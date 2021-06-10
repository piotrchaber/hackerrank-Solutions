// github.com/piotrchaber

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head;
    while(temp->next != nullptr) {
        if(temp->data == (temp->next)->data) {
            temp->next = (temp->next)->next;
        }
        else temp = temp->next;
    }
    return head;
}

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = new SinglyLinkedListNode{head->data};
    SinglyLinkedListNode* tempHead = temp;
    while(head->next != nullptr) {
        head = head->next;
        if(temp->data != head->data) { temp->next = head; temp = temp->next; }
    }
    temp->next = nullptr;
    return tempHead;
}