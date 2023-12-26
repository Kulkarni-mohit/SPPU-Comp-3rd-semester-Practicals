def binn(lst,t):

    low = 0
    high = len(lst)-1

    while low<=high:

        mid = (low+high)//2

        if lst[mid]<t:
            low = mid+1

        elif lst[mid]>t:
            high = mid-1

        else:
            return mid

    return -1

def bi(lst,t,low=0,high=6):

    if low>high:
        return False

    mid = (low + high)//2

    if lst[mid]<t:
        return bi(lst,t,mid+1,high)
    elif lst[mid]>t:
        return bi(lst,t,low,mid-1)
    else:
        return mid

lst = [1,5,9,12,15,45]

print(binn(lst,10))
print(bi(lst,10))
