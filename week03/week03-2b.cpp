// week03-2b.cpp �G�X�@�n�g2�� (���n�u���� nums[i]�u��+1 -1 0)
// LeetCode �ǲ߭p�e��8�D 1822. Sign of the Product of an Array
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans = 1; // �]��0������ơA���|�ܦ�0�A�u��1�̭��A�������ܤ���
        for(int i=0; i<nums.size(); i++){ // �ݦ��X�ӼơA�j��]�X��
            if(nums[i]>0) ans *= +1;
            if(nums[i]<0) ans *= -1;
            if(nums[i]==0) ans *= 0;
            //ans *=nums[i];
        } // �Ʀr�V���V�j�A1000�ӼƦr�A����@�b�A�N�z���F�A�ҥH�{�����F�A����
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
