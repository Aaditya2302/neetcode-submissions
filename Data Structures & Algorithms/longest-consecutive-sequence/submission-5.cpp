class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()) return 0;
        unordered_set<int> st;
        for(int i=0; i<n; i++){
            st.insert(nums[i]);
        }
        int longest = 1;
        for(auto i : st){
            if(st.find(i-1) == st.end()){
                int count = 1;
                int x = i;
            
            while(st.find(x+1) != st.end()){
                x++;
                count++;
            }
            longest = max(longest, count);
        }   
    }
    return longest;
    }
};
