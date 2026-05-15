# question no 4

def rearrange(arr):
    n = len(arr)
    arr.sort()
    multiplier = arr[n-1] + 1
    left = 0
    right = n-1
    
    for i in range(n):
        if i%2 == 0:
            new_value = arr[right] % multiplier
            arr[i] += new_value * multiplier   
            right -= 1
        else:
            new_value = arr[left] % multiplier
            arr[i] += new_value * multiplier  
            left += 1
    
    for i in range(n):
        arr[i] = arr[i] // multiplier


arr1 = [1, 2, 3, 4, 5, 6]
rearrange(arr1)
print(arr1)  # should print [6, 1, 5, 2, 4, 3]

arr2 = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110]
rearrange(arr2)
print(arr2)  # should print [110, 10, 100, 20, 90, 30, 80, 40, 70, 50, 60]