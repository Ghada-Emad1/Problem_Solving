class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int Max_El=0;
        int temp;
        for(int i=arr.size()-1;i>=0;i--){
            temp=arr[i];
            if(i==arr.size()-1) arr[i]=-1;
            else{
                arr[i]=Max_El;
            }
            Max_El=max(Max_El,temp);
        }
        return arr;
    }
};