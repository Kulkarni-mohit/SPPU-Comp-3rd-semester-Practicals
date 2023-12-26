def bubble_sort(arr):
    for i in range(len(arr)-1):
        for j in range(len(arr)-i-1):
            if arr[j]> arr[j+1]:
                temp = arr[j+1]
                arr[j+1] = arr[j]
                arr[j] = temp
    return arr
a = [2,5,7,3,1,4231,455,45454,56874]
print(bubble_sort(a))


def selection(arr):
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            if arr[j]<arr[i]:
                arr[j],arr[i] = arr[i],arr[j]

    return arr

print(selection(a))
