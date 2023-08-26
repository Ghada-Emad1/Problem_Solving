class Solution {
    private :
    bool BinarySearch(vector<int>&nums, int low, int high, int target){
 		if(low > high) return false;
 		int mid = low + (high - low) / 2;
 		if(target == nums[mid]) return true;
 		else if(target > nums[mid]) return BinarySearch(nums, mid + 1, high, target);
 		else return BinarySearch(nums, low, mid - 1, target);
 	}
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
 		int height = matrix.size(), width = matrix[0].size();
 		int row = 0;
 		while(row < height && target > matrix[row][width - 1]){
 			row++;
 		}
        // if(row>=height) return false;
        // else return bs(matrix[row],0,width-1,target);
 		return row >= height ? false: BinarySearch(matrix[row], 0, width - 1, target);
 	}
 	
    
};
//search where the element in which row and use binary search to find it