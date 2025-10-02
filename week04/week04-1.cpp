// week04-1.cpp 家览肈酚帝肈ヘ糶祘Α
// LeetCode 珼驹肈 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // 秨﹍碞耻硂或瞺
        while(numBottles >= numExchange){ // 狦瞺计 >= 传计碞传
            numBottles = numBottles - numExchange + 1; //
            ans ++;
            numExchange ++;
        }
        return ans;
    }
};
