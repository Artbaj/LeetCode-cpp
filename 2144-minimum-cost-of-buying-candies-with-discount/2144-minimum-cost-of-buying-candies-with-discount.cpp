class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int price=0;
       sort(cost.begin(),cost.end());
      
        

        for(int i=0;i<cost.size();i++){
            if(i%3!=2){
                price+=cost[i];
            }
        }

        return price;
    }
};