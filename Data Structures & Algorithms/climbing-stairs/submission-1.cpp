class Solution {
public:
    int climbStairs(int n) {
        // 妹波納氣函數
        //到第 n 階只有兩種方式：
        //從 n-1 走 1 步上來
        //從 n-2 走 2 步上來

        if (n <= 2) return n;

        int a = 1 ;
        int b = 2 ;

        for( int i = 3 ; i <= n ; i++ ){
            int c = a + b ;
            a = b ;
            b = c ;

        }

        return b ;
    }
};
