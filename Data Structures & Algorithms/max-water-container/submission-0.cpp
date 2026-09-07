class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxi=0;
        int area = INT_MIN;
        while (i < j) {
            area = min(heights[i],heights[j])*abs(j-i);
            maxi = max(maxi, area);
           if(heights[i]>heights[j]){
            j--;
           }else{
            i++;
           }

        }
        return maxi;
    }
};
