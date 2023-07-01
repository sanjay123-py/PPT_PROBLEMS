class Solution {
public:
    int removeElement(vector<int>& arr, int k) {
        int i=0,size=arr.size();
        for(int j=0;j<size;j++)
        {
            if(arr[j]!=k)
            {
            swap(arr[i],arr[j]);
            i++;
            }
        }
        return i;
    }
    
};
