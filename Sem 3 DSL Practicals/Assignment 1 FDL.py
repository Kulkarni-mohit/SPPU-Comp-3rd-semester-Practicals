def average(present):
    
    print("Average marks = ", sum(present)/len(present))

def maximum_marks(present):
    
    print('Maximum marks = ',max(present))

def minimum_marks(present):
    print('Minimum marks = ',min(present))

def absent_no(no_of_students,present):
    print("Absent students = ", no_of_students-len(present))

def frequency(present):
    l1 = []
    l2 = []
    l3 = []
    l4 = []
    l5 = []

    for i in present:
        if i>=0 and i<=10:
            l1.append(i)
        elif i>10 and i<=20:
            l2.append(i)
        elif i>20 and i<=30:
            l3.append(i)
        elif i>30 and i<=40:
            l4.append(i)
        elif i>40 and i<=50:
            l5.append(i)
    length = [len(l1),len(l2),len(l3),len(l4),len(l5)]
    a=max(length)
    b=length.index(a)

    if b==0:
        print("maximum frequency of marks is in between 0-10")

    elif b==1:
        print("maximum frequency of marks is in between 11-20")

    elif b==2:
        print("maximum frequency of marks is in between 21-30")

    elif b==3:
        print("maximum frequency of marks is in between 31-40")

    elif b==4:
        print("maximum frequency of marks is in between 41-50")


no_of_students = int(input("Enter Number of Students: "))
maximum_marks = 50

marks = []
present = []

i = 1
while i <= (no_of_students):
    mark = int(input("Enter the marks of student of roll no "+str(i)+':'))    

    if mark < (maximum_marks+1):
        
        marks.append(mark)

        if mark>0:
            present.append(mark)
    else:
        
        print("Enter Valid Marks")
        i-=1

    i+=1

ans = 'y'
while ans == 'y':

    print("\n\nAvailable operations on the data: \n1. Average Marks \n2. Maximum marks\n3. Minimum marks \n4. Absent Students count \n5. Maximum Frequency Range")

    a=int(input("Enter the Sr. Number : "))

    if a == 1:
        average(present)
    

    elif a == 2:
        print(max(present))

    elif a == 3:
        minimum_marks(present)

    elif a == 4:
        absent_no(no_of_students,present)

    elif a == 5:
        frequency(present)

    ans = input("Want to perform more operations above mentioned? [y/n]") 
