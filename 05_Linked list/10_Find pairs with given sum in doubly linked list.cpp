void findPairsON2(Node* head, int x) {
    for (Node* p1 = head; p1 != NULL; p1 = p1->next) {
        for (Node* p2 = p1->next; p2 != NULL; p2 = p2->next) {
            if (p1->data + p2->data == x) {
                cout << "(" << p1->data << ", " << p2->data << ")" << endl;
            }
        }
    }
}


void findPairsON(Node* head, int x) {
    if (!head) return;

    Node* start = head;
    Node* end = head;

    // Move end to the last node
    while (end->next) {
        end = end->next;
    }

    while (start != end && end->next != start) {
        int sum = start->data + end->data;
        if (sum == x) {
            cout << "(" << start->data << ", " << end->data << ")" << endl;
            start = start->next;
            end = end->prev;
        } else if (sum < x) {
            start = start->next;
        } else {
            end = end->prev;
        }
    }
}
