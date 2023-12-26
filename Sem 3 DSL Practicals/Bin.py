# Binary Search

def Bin_nor(lst,t):
    lst.sort()
    low = 0
    high = len(lst)-1

    while low<=high:
        mid = (low+ high)//2

        if lst[mid]==t:
            return mid

        elif lst[mid]<t:
            low = mid+1

        elif lst[mid]>t:
            high = mid-1

    return -1

lst = [2,4,5,6,78,455]

print(Bin_nor(lst,2))


            
def Bin_re(lst,t,low=0,high=len(lst)-1):
    lst.sort()
    if low>high:
        return False
    mid = (low+high)//2

    if lst[mid] == t:
        return mid

    elif lst[mid]>t:
        return Bin_re(lst,t,0,mid-1)

    elif lst[mid]<t:
        return Bin_re(lst,t,mid+1,high)

print(Bin_re(lst,4))












    
