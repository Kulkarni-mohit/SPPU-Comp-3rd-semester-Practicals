def Linearsearch(lst,a):
    print("Searching with linear search.....")
    l = 0

    for i,j in enumerate(lst):
        if j==a:
            print("The Student Attended the workshop!!!")
            l=1
            break
    if l==0:
        print("Student Not Attended the workshop!!!")


def sentinel(lst,target):

    print("Searching with Sentinal Search......")
    lst.append(target)
    i=0
    while(lst[i]!=target):
        i+=1

    if((i+1)==len(lst)):
        print("Student Not Attended the workshop!!!")
    else:
        print("The Student Attended the workshop!!!")
    


lst = [int(i) for i in input("Enter The Student's roll number : ").split()]

a = int(input("Enter the roll no. to be searched : "))
print()
Linearsearch(lst,a)

lst1 = lst
print()
sentinel(lst,a)
