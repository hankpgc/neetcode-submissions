class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<int> seen ;

        for( int n : nums ) {
            if( !seen.count(n) )
                seen.insert(n);
            else
                seen.erase(n) ;

            
        }

        return *seen.begin();

    }
};
