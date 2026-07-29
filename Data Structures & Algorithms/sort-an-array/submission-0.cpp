class Solution {
public:
    void mergeArr(vector<int>&v1,vector<int>&v2,vector<int>&res){
    
    int i = 0,j = 0,k = 0;
    
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) res[k++] = v1[i++];
        else res[k++] = v2[j++];
    }
    
    if(i == v1.size())  
        while(j<v2.size()) res[k++] = v2[j++];
        
    if(j == v2.size()) 
        while(i<v1.size()) res[k++] = v1[i++];
}

void mergeSort(vector<int>&v){
    
    if(v.size() <= 1) return;
    
    int n1 = v.size()/2;
    int n2 = v.size()-n1;
    
    vector<int>v1(n1);
    vector<int>v2(n2);

    
    for(int i=0;i<n1;i++){
        v1[i] = v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i] = v[i+n1];
    }
    
    mergeSort(v1);
    mergeSort(v2);
    
    
    mergeArr(v1,v2,v);
}

    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
};