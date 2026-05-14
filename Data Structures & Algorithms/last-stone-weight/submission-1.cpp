class Solution {
public:
    priority_queue<int> pq ;// 預設為 maxHeap
    int stone1, stone2 ;

    void getTwoStones(){
        stone1 = pq.top() ;
        pq.pop() ;
        stone2 = pq.top() ;
        pq.pop() ;
    }
    int lastStoneWeight(vector<int>& stones) {
        
        for( int n : stones )
            pq.push(n) ;

        while( pq.size() > 1 ){
            getTwoStones() ;

            if( stone1 > stone2 )
                pq.push( stone1 - stone2 ) ;
            
        }

        return pq.empty() ? 0 : pq.top() ;
    }
};
