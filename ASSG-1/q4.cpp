  vector<int> plusOne(vector<int>& arr) {
    int size=arr.size();
    if(size==0) return arr;
    int h=size-1;
    if(arr[h]==9)
    {
        while(h>=0&&arr[h]==9)
        {
            arr[h]=0;
            h--;
        }
        if(h<0){
            vector<int>v1;
            v1.push_back(1);
            for(int i=0;i<size;i++)v1.push_back(0); 
            return v1;
        }
    }
        arr[h]+=1;
        return arr;
}
