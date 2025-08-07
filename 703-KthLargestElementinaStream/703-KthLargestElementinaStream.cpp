// Last updated: 8/7/2025, 6:23:51 PM
class KthLargest {
public:
priority_queue<int , vector<int> , greater<int>> st;
int k;
    KthLargest(int k, vector<int>& nums) {
        
        int n = nums.size();
        this->k = k;
        for(int i : nums){
            st.push(i);
            if(st.size()> k){
            st.pop();
        }
        }
        
    }
    
    int add(int val) {
        st.push(val);
        if(st.size() > k){
            st.pop();
            
        }
        return st.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */