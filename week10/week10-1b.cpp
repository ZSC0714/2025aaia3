// week10-1b.cpp 糶2Ωノ for 癹伴材2Ωノ计厩
// 1523. Count Odd Numbers in an Interval Range
// 眖 low ... high 柑Τ碭od计?
class Solution {
public:
    int countOdds(int low, int high) {
        int ans = (high-low) / 2; // ノ计厩计
        if(high%2==1 || low%2==1) ans++; // 繷ЮΤ计璶++
        return ans;
    }
};
