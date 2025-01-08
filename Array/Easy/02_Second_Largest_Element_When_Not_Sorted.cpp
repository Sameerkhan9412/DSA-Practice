 int getSecondLargest(vector<int> &arr) {
        // Code Here
        int firstMax=arr[0];
        int secondMax=INT_MIN;
        for(int i=1;i<arr.size();i++){
            if(arr[i]>firstMax){
                secondMax=firstMax;
                firstMax=arr[i];
            }
            else if(arr[i]>secondMax && arr[i]!=firstMax){  //is condition me mistake hoti hai
                secondMax=arr[i];
            }
        }
        if(secondMax==INT_MIN){
            return -1;
        }
        return secondMax;
    }