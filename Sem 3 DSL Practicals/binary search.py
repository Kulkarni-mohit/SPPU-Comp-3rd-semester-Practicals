# Searching element using Binary Search

def binary_search(arr, x):
    arr.sort()
    low = 0
    high = len(arr) - 1
    mid = 0
 
    while low <= high:
 
        mid = (high + low) // 2
 
        if arr[mid] < x:
            low = mid + 1
 
        elif arr[mid] > x:
            high = mid - 1
 
        else:
            return mid
 

    return -1
 

lst = [int(i) for i in input("Enter The Student's roll number : ").split()]

a = int(input("Enter the roll no. to be searched : "))
print()

print("The student attended the Workshop",binary_search(lst,a))
