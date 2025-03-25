int findLen(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}

// Function to delete the head node
Node* deleteFromHead(Node* head) {
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->prev = NULL;
    delete temp;
    return head;
}

// Function to delete the tail node
Node* deleteFromTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->prev->next = NULL;
    delete curr;
    return head;
}

// Function to delete a node at a given position
Node* deleteNode(Node* head, int x) {
    if (head == NULL) return NULL;

    int length = findLen(head);
    if (x < 1 || x > length) return head;  // Invalid position

    if (x == 1) {
        return deleteFromHead(head);
    }
    if (x == length) {
        return deleteFromTail(head);
    }

    // Delete a middle node
    Node* curr = head;
    for (int i = 1; i < x; i++) {
        curr = curr->next;
    }

    curr->prev->next = curr->next;
    curr->next->prev = curr->prev;

    delete curr;
    return head;
}