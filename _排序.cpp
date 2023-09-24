
/*
    https://leetcode.cn/problems/sort-an-array/discussion/
 */

nums.sort()
return nums


//测试用例对快排非常针对，想用快排的话不仅必须随机化取分割点，而且每次切分完成后都要把与分割点相等的值搬运到分割点旁边，并且下一次递归避开这些点。 归并排序和堆排序则不受影响，稳定通过
//能搞定含有大量重复元素和序列基本有序的情况
//技巧就是单趟排序的时候使用首尾双指针，这样即便元素都一样，两个指针相遇位置也是中间，本次排好的pivot位于序列中间，左右两个序列长度平衡，有效避免了极端情况。使用随机数pivot可以解决一般的原序列基本有序的情况




// =======================

// 双指针快排
void qsort(vector<int>& nums, int left, int right) {
   if (left < right) {
       int index = rand() % (right - left + 1) + left;  // 随机索引
       swap(nums[right], nums[index]);  // 使用最右侧元素作为pivot
       int i = left, j = right - 1, pivot = nums[right];
       while (true) {
           while (i <= j and nums[i] < pivot)i++;
           while (i <= j and nums[j] > pivot)j--;
           if (i > j)break;
           swap(nums[i++], nums[j--]);
       }
       swap(nums[right], nums[i]);  // i的位置就是pivot的位置
       qsort(nums, left, i - 1);
       qsort(nums, i + 1, right);
   }
   return;
}

class Solution {
public:
    Solution() {
        buffer.resize(100001);
        for (int i = 0; i < 100001; ++i) {
            buffer[i] = 0;
        }
    }
public:
    vector<int> buffer;
    void jiShuSort(vector<int>& nums) {
        int min_index = 100001;
        for (int i = 0; i < nums.size(); ++i) {
            int index = nums[i] + 5 * 10000;
            min_index = min(index, min_index);
            buffer[index] += 1;
        }
        int nums_index = 0;
        for (int i = min_index; i < buffer.size(); ++i) {
            int count = buffer[i];
            while (count > 0) {
                nums[nums_index] = i - 5 * 10000;
                nums_index += 1;
                count -= 1;
            }
            if (nums_index == nums.size()) {
                break;
            }
        }
    }
     vector<int> sortArray(vector<int>& nums) {
        jiShuSort(nums);
        return nums;
    }
};



class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        SelectSort(nums,n);
        return nums;
    }
    //插入
    void InsertSort(vector<int>& nums,int n) {
        for(int i=0;i<n;i++) {
            int temp = nums[i];
            int j = i-1;
            while(j >= 0 && nums[j] >temp) {
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1] = temp;
        }
    }
    //折半插入
    void HInsertSort(vector<int>& nums,int n) {
        int i,j,low,high,mid;
        for( i=0;i<n;i++ ){
            int tmp = nums[i];
            low = 0;high = i-1;
            while(low<=high) {
                mid = low+(high-low)/2;
                if(nums[mid] > tmp){
                    high = mid - 1;
                }else{
                    low = mid + 1;
                }
            }
            for(j=i-1;j>=high+1;j--){
                nums[j+1] = nums[j];
            }
            nums[high+1] = tmp;
        }
    }
    //希尔
    void ShellSort(vector<int>& nums,int n){
        for(int dk = n/2;dk>=1;dk=dk/2){
            for(int i=dk;i<n;++i) {
                if(nums[i]<nums[i-dk]){
                    int tmp = nums[i],j;
                    for(j = i-dk;j>=0&&tmp<nums[j];j-=dk){
                        nums[j+dk] = nums[j];
                    }
                    nums[j+dk]=tmp;
                }
            }
        }
    }
    //冒泡
    void BubbleSort(vector<int>& nums,int n){
        for(int i=0;i<n-1;i++) {
            bool flag = false;
            for(int j=n-1;j>i;j--) {
                if(nums[j-1]>nums[j]){
                    swap(nums[j-1],nums[j]);
                    flag = true;
                }
            }
            if(flag == false){
                return ;
            }
        }
    }
    //快排
    void QuickSort(vector<int>& nums,int low,int high,int n){
        
        if(low<high) {
            int pivotpos = partition(nums,low,high);
            QuickSort(nums,low,pivotpos-1,n);
            QuickSort(nums,pivotpos+1,high,n);
        }
    }
    int partition(vector<int>& nums,int low,int high){
        int pivot = nums[low];
        while(low<high) {
            while(low<high && nums[high]>=pivot)--high;
            nums[low] = nums[high];
            while(low<high && nums[low]<=pivot) ++low;
            nums[high] = nums[low];
        }
        nums[low] = pivot;
        return low;
            
    }
    //简单选择
    void SelectSort(vector<int>& nums,int n) {
        for(int i=0;i<n-1;i++) {
            int min = i;
            for(int j=i+1;j<n;j++) {
                if(nums[j]<nums[min]) min = j;
               
            }
            if(min!=i) swap(nums[i],nums[min]);
        }
    }
    //堆排序
   void adjust(vector<int> &nums, int len, int index){
        int left = 2*index + 1; // index的左子节点
        int right = 2*index + 2;// index的右子节点

        int maxIdx = index;
        if(left<len && nums[left] > nums[maxIdx])     maxIdx = left;
        if(right<len && nums[right] > nums[maxIdx])     maxIdx = right;
 
    if(maxIdx != index)
    {
        swap(nums[maxIdx], nums[index]);
        adjust(nums, len, maxIdx);
    }
 
}
 
// 堆排序
    void HeapSort(vector<int> &nums, int size){
       for(int i=size/2 - 1; i >= 0; i--){
            adjust(nums, size, i);
        }
         for(int i = size - 1; i >= 1; i--){
                swap(nums[0], nums[i]);        
                adjust(nums, i, 0);              
            }
        }
};