//week12-2.cpp 學習計畫 math 第4題
//leetcode 976. Largest Perimeter Triangle
//找可構成三角形的三邊長 加起來最大 兩邊和>第3邊
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end()); //先有效率的排列
        //先練習倒過來的迴圈 把大到小印出來
        //for(int i=nums.size()-1; i>=0; i--){
        //    cout << nums[i] << " ";
        //} //把大到小印出來 正確
        for(int i=nums.size()-1; i>=2; i--){
            //取出 nums[i] vs. nums[i-1] nums[i-2]
            if(nums[i] < nums[i-1] + nums[i-2]){
                return nums[i] + nums[i-1] + nums[i-2];
            }// 找到最大的合法三角形 把三邊加起來
        }
        return 0; // 找不到答案 return 0
    }
};
