class Solution {
public:

    int getNext(int n) {
        int sum = 0 ;

        while( n > 0 ){
            int digit = n%10 ;

            sum += digit * digit ;

            n /= 10;
        }

        return sum ;
    }
    bool isHappy(int n) {
        unordered_set<int> seen ;

        while( !seen.count(n) && n != 1 ){
            seen.insert(n) ;

            n = getNext(n) ;

        }

        return n==1;
    }
};
