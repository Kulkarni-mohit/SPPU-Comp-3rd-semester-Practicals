import random

def make_matrx(x,y):
    matrx1=[]
    print()
    for i in range(x):
        for j in range(y):
            print(i,j,sep="",end=" ")
        print("\n")
    print("\n")
    
    # print("Enter values of :- \n")
    for i in range(x):
        temp=[]
        for j in range(y):
            # print(i,j,sep="",end=" ")
            # val=int(input(" = "))
            # print("\n")
            val=random.randint(1,10)
            temp.append(val)
        matrx1.append(temp)
    
    return matrx1
def mat_add(matrx1,matrx2):
    matrx3=[]
    row=len(matrx1)
    col=len(matrx1[0])
    for i in range(row):
        temp=[]
        for j in range(col):
            val=matrx1[i][j]+matrx2[i][j]
            temp.append(val)
        matrx3.append(temp)
    return matrx3

def mat_sub(matrx1,matrx2):
    matrx3=[]
    row=len(matrx1)
    col=len(matrx1[0])
    for i in range(row):
        temp=[]
        for j in range(col):
            val=matrx1[i][j]-matrx2[i][j]
            temp.append(val)
        matrx3.append(temp)
    return matrx3

def mat_mult(matrx1,matrx2):
    matrx3=[]
    row1=len(matrx1)
    col1=len(matrx1[0])
    row2=col1
    col2=len(matrx2[0])
    for i in range(row1):
        temp3=[]
        trow1=matrx1[i]
        for s in range(col2):
            value=0
            tcol2=[]
            for j in range(row2):
                tcol2.append(matrx2[j][s])
            for k in range(len(trow1)):
                value+=(trow1[k]*tcol2[k])
            temp3.append(value)
        matrx3.append(temp3)
    return matrx3

def tpose(matrx1):
    matrx2=[]
    row=len(matrx1)
    col=len(matrx1[0])
    for i in range(col):
        temp=[]
        for j in range(row):
            temp.append(str(i)+str(j))
        matrx2.append(temp)
    
    for i in range(row):
        temp=[]
        for j in range(col):
            matrx2[j][i]=matrx1[i][j]
    return matrx2

def disp_mat(matrx1):
    print()
    for i in matrx1:
        print(i)
    print()

a=int(input("Enter row of 1st Matrix :- "))
b=int(input("Enter col. of 1st Matrix :- "))
m=int(input("Enter row of 2nd Matrix :- "))
n=int(input("Enter col. of 2nd Matrix :- "))
mat1=make_matrx(a,b)
mat2=make_matrx(m,n)

print("1. ADDITION.\n2. SUBTRACTION.\n3. MULTIPLICATION.\n4. TRANSPOSE.\n")
disp_mat(mat1)
disp_mat(mat2)
choice=int(input("OPERATION CODE:- "))
if(choice==1):
    print("ADDITION")
    if(a==m and b==n):
        mat3=mat_add(mat1,mat2)
        print("RESULTATNT MATRIX IS :-")
        disp_mat(mat3)
    else:
        print("!! ERROR...PLEASE CHECK ROWS & COLUMN  !!")
elif(choice==2):
    print("SUBTRACTION")
    if(a==m and b==n):
        mat3=mat_sub(mat1,mat2)
        print("RESULTATNT MATRIX IS :-")
        disp_mat(mat3)
    else:
        print("!! ERROR...PLEASE CHECK ROWS & COLUMN  !!")
elif(choice==3):
    print("MULTIPLICATION")
    if(b==m):
        mat3=mat_mult(mat1,mat2)
        print("RESULTATNT MATRIX IS :-")
        disp_mat(mat3)
    else:
        print("!! ERROR...PLEASE CHECK ROWS & COLUMN  !!")
elif(choice==4):
    mat3=tpose(mat1)
    print("TRANSPOSE")
    print("RESULTATNT MATRIX IS :-")
    disp_mat(mat3)
else:
    print("!!  INVALID ENTRY !!")