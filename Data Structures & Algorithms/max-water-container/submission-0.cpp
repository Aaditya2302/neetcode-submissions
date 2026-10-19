class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int maxWater = 0;
        while(i<j){
            int h = min(heights[i], heights[j]);
            int w = j-i;
            int area = h*w;
            maxWater = max(area, maxWater);
            if(heights[i] > heights[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }
};
