// week04-1.cpp �����D�A�ӵ��D�ؼg�{��
// LeetCode �D���D 3100. Water Bottles II
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ans = numBottles; // �@�}�l�N�ܤF�o��h�~
        while(numBottles >= numExchange){ // �p�G�~�l�� >= �I���ơA�N�I��
            numBottles = numBottles - numExchange + 1; //
            ans ++;
            numExchange ++;
        }
        return ans;
    }
};
