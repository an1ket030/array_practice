#question no 3

def findElement(arr):
    n = len(arr)
    prefix_max = [0] * n        
    prefix_max[0] = arr[0]      
    
    for i in range(1, n):
        prefix_max[i] = max(prefix_max[i-1], arr[i])
        
    suffix_min = [0] * n        
    suffix_min[n-1] = arr[n-1]      
    
    for i in range(n-2, -1, -1):
        suffix_min[i] = min(suffix_min[i+1], arr[i])
        
    for i in range(0, n-1):
        if arr[i] >= prefix_max[i-1] and arr[i] <= suffix_min[i+1]:
            return arr[i]
    
    return -1
    
print(findElement([4, 2, 5, 7]))   # should return 5
print(findElement([11, 9, 12]))    # should return -1