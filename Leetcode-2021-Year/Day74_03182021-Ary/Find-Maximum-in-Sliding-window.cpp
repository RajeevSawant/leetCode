




    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        deque<int> window;
        vector<int> result;


        for (int i = 0; i < nums.size(); i++){

            while(!window.empty() && nums[i] >= nums[window.back()]){
                window.pop_back();
            }

            window.push_back(i);

            if (i >= k - 1){
                result.push_back(nums[window.front()]);
            }

            if (!window.empty() && window.front() <= i - k + 1){
                window.pop_front();
            }

        }

        return result;
    }



//// https://www.educative.io/module/lesson/data-structures-cpp/7DEBykQB3gw
