print("For Matrix 1")
row = int(input("Enter the no. of rows:"))
col = int(input("Enter the no. of columns:"))
mat1 = [[0 for i in range(col)] for i in range(row)]
print(mat1)
for i in range(row):
    for j in range(col):
        mat1[i][j] = int(input("Enter No: "))
print(mat1)
print("For Matrix 2")

row2 = int(input("Enter the no. of rows:"))
col2 = int(input("Enter the no. of columns:"))

mat2 = [[0 for i in range(row2)] for i in range(col2)]

for i in range(row2):
    for j in range(col2):
        mat2[i][j]= int(input("Enter No: "))

print(mat1)
print(mat2)


if row == row2 and col == col2:
    addition = [[0 for i in range(row)] for i in range(col)] 

    for i in range(row):
        for j in range(col):
            addition [i][j] = mat1[i][j] + mat2[i][j]

print(addition)
