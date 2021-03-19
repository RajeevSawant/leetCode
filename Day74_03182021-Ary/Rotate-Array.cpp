    


   void swap (int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
    
    void reverse_numbers(vector<int>& arr, int start, int end){
        
        while(start < end){
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
        
    }
    
    void rotate(vector<int>& nums, int k) {

        int size = nums.size();
        
        k = k % size;
            
        reverse_numbers(nums, 0, size - 1);
        reverse_numbers(nums, 0, k - 1);
        reverse_numbers(nums, k , size - 1);
    }



//https://www.educative.io/module/lesson/data-structures-cpp/m240jJMAPZO
