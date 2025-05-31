// Function to push all the elements into the stack.
stack<int> _push(int arr[], int n) {
    // your code here
    int min=-1;
    stack<int> ans;
    for(int i=0;i<n;i++){
        if(ans.empty()){
            ans.push(arr[i]);
            min=arr[i];
        }
        else{
            if(arr[i]<min){
                ans.push(arr[i]);
                min=arr[i];
            }
            else{
                ans.push(min);
            }
        }
    }
    return ans;
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    
    // your code here
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}