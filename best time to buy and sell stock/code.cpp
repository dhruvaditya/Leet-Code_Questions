class Solution {
    public int maxProfit(int[] prices) {
        int minimum=prices[0];
        int maxPr=0;
        for(int price:prices){
            minimum=Math.min(minimum,price);
            maxPr=Math.max(maxPr,price-minimum);
        }
        return maxPr;
    }
}
