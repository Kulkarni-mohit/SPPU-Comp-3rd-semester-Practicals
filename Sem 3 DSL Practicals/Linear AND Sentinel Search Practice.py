# Linear Search

def Linearsearch(lst,t):
    for i in range(len(lst)):
        if t==lst[i]:
            print("Record Found....")
            break
    else:
        print("Record Not Found....")

def Sentinelsearch(lst,t):
    lst.append(t)
    i=0
    while(lst[i]!=t):
        i+=1

    if i+1 == len(lst):
        print("Record Not Found.....")

    else:
        print("Record Found......")


lst = [4,5,6,8,1,10,3]

Linearsearch(lst,9)
Sentinelsearch(lst,9)

    

    
