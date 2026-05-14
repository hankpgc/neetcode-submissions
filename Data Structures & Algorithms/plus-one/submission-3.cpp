class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long sum = 0 ;
        vector<int> output ;

        for( int n : digits ){
            sum = sum * 10 + n ;
            cout << "sum:" << sum << endl ;
        }

        sum ++;
        cout << "sum:" << sum << endl ;

        while( sum > 0 ){
            int digit = sum % 10 ; // 取最後一位數字
            output.push_back(digit);

            sum /= 10 ;
        }

        reverse(output.begin(), output.end()) ;
        return output;
    }
};
