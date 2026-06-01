class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();

        int maxprice, minprice=prices[0];
        int profit=0,minIdx;

        if(n==1)
            return profit;

        for(int i=0;i<n;i++)
        {
            if(prices[i]<minprice)
            {
                minprice=prices[i];
                minIdx=i;
            }
        }  

        if(minIdx==n-1)
            return profit;

        maxprice=prices[minIdx+1];
        for(int i=minIdx+1;i<n;i++)
        {
            if(prices[i]>maxprice)
                maxprice=prices[i];
        } 

        profit= maxprice - minprice;

        return profit;
    }
};