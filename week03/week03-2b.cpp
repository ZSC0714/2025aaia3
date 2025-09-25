// week03-2b.cpp 璶糶2Ω (ぃ璶痷 nums[i]+1 -1 0)
// LeetCode 厩策璸礶材8肈 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // 0ヴ计常穦跑Θ0Τ1程ぐ或跑ぐ或
        for(int i=0; i<nums.size(); i++){ // Τ碭计癹伴禲碭Ω
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            //ans *=nums[i];
        } // 计禫禫1000计碞脄┮祘Α岿躲躲躲
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
