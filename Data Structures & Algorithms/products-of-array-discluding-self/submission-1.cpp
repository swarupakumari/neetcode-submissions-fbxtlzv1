class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
    //    int n = nums.size();
    //     vector<int> res(n);   0(n2)

    //     for (int i = 0; i < n; i++) {
    //         int prod = 1;
    //         for (int j = 0; j < n; j++) {
    //             if (i != j) {
    //                 prod *= nums[j];
    //             }
    //         }
    //         res[i] = prod;
    //     }
    //     return res;


    /////////////////////////////////////////////////////////////////////////////

    int prod=1;
    int zcount=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0)   prod=prod*nums[i];
        else  zcount++;
    }

    if(zcount>1)  return vector<int>(nums.size(), 0);
    vector<int> res(nums.size());
    for(int i=0;i<nums.size();i++){
        if(zcount>0){
           res[i]=(nums[i]==0) ? prod:0;
        }

        else{
            res[i]=prod/nums[i];

        }
    }



   return res;

    }
};
