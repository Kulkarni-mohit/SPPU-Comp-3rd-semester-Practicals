def Linearsearch(lst,t):
    f=0
    for i in lst:
        if i == t:
            f=1
            print("Present")
    if f==0:
        print("Absent")
        

def Sentinel(lst, t):
    lst.append(t)
    i=0
    while(lst[i]!=t):
        i+=1

    if i+1==len(lst):
        print("Absent")
    else:
        print('Present')

lst = [int(i) for i in (input("Enter Elements: ")).split()]
t=5

Linearsearch(lst,t)
Sentinel(lst, t)
