# Sorting

def bubble(lst):
    for i in range(len(lst) - 1):
        for j in range(len(lst)-i-1):

            if lst[j]>lst[j+1]:
                lst[j],lst[j+1] = lst[j+1],lst[j]

    return lst

lst = [1,5,6,3,2,3,4,7,11,24]
print(bubble(lst))

def sel (lst):

    for i in range(len(lst)-1):
        for j in range(i+1,len(lst)):
            if lst[i]>lst[j]:
                lst[i],lst[j] = lst[j],lst[i]

    return lst

print(sel(lst))
