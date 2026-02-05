class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> temp;

        for(int i=0;i<nums.size();i++)
        {
            if(temp.size()<k)
            {
                temp.push(nums[i]);
            }

            else if(temp.size()==k)
            {
                int l=temp.top();
                
                if(l<nums[i])
                {
                    temp.pop();
                    temp.push(nums[i]);
                }
            }
        }

        return temp.top();    
    }
};
