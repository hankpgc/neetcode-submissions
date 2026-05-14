class Solution {
public:

    int hammingWeight(uint32_t n) {
        int count = 0 ;

        while( n > 0 ){

            if( n & 1 ) // 檢查最後一為
                count++ ;

            n >>= 1 ;
        }

        return count ;
    }


    vector<int> countBits(int n) {
        vector<int> output ;

        for( int i = 0 ; i <= n ; i++ ) {
            int bits = hammingWeight(i) ;
            output.push_back( bits ) ;
        }

        return output ;

    }
};
