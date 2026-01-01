class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(); 
        vector<int> newArr(n); 

        int i=0, j=0; 
        while( j<n) {  
            newArr[j++]=arr[i]; 
            if (arr[i]==0 && j<n) {
                newArr[j++]=0;
            }
            i++;
        }
        for (int i=0; i<n; i++)
        {
            arr[i]=newArr[i];
        }
    }
};