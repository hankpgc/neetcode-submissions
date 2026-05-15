class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int expeted = n * (n+1) / 2 ;

        //計算數列總和 - nums 總和 = ans
        //等差攻勢 n(n+1)/2

        int sum = 0 ;


        for( int n : nums ) {
            sum += n ;
        }

        return expeted - sum ;
    }
};
