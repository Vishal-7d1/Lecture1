class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int total = n1 + n2;
        int medianPos = (total + 1) / 2;
        
        int i = 0, j = 0, count = 0;
        int median1 = 0, median2 = 0;
        
        while(count < medianPos) {
            if(i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                median1 = nums1[i];
                i++;
            } else {
                median1 = nums2[j];
                j++;
            }
            count++;
        }
        
        if(total % 2 == 0) {
            if(i < n1 && (j >= n2 || nums1[i] <= nums2[j])) {
                median2 = nums1[i];
            } else {
                median2 = nums2[j];
            }
            return (median1 + median2) / 2.0;
        } else {
            return median1;
        }
        
    }
};