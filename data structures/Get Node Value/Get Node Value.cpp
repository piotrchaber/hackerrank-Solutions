// github.com/piotrchaber

int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* headTemp = head;
    int n = 0;
    while(head->next != nullptr) {
        if(n >= positionFromTail) headTemp = headTemp->next;
        head = head->next;
        n++;
    }
    return headTemp->data;
}