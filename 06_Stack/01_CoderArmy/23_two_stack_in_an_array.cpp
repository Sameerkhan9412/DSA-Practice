class twoStacks {
private:
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // Constructor
    twoStacks(int n = 100) {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    // Push an element to stack1
    void push1(int x) {
        if (top1 + 1 == top2) return; // No space
        arr[++top1] = x;
    }

    // Push an element to stack2
    void push2(int x) {
        if (top2 - 1 == top1) return; // No space
        arr[--top2] = x;
    }

    // Pop an element from stack1
    int pop1() {
        if (top1 == -1) return -1; // Stack1 empty
        return arr[top1--];
    }

    // Pop an element from stack2
    int pop2() {
        if (top2 == size) return -1; // Stack2 empty
        return arr[top2++];
    }

    // Destructor to avoid memory leak
    ~twoStacks() {
        delete[] arr;
    }
};
