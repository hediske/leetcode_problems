class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i = m + n -1
        while i >= n:
            nums1[i] = nums1[i-n]
            i-=1
        print(nums1)

        i = 0
        j = 0

        curr = 0
        while i<m and j<n :
            if nums1[i + n] <= nums2[j]:
                nums1[curr] = nums1[i+n]
                i+=1
            else:
                nums1[curr] = nums2[j]
                j+=1
            curr+=1
        
        while j<n:
            nums1[curr] = nums2[j]
            j+=1
            curr+=1
        
        while i<m:
            nums1[curr] = nums1[i+n]
            i+=1
            curr+=1