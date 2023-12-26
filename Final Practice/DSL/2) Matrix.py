
def Mat_Cre(row,col):

    Mat = [[0 for i in range(col)] for j in range(row)]

    for i in range(row):
        for j in range(col):
            Mat[i][j] = int(input("Matrix ["+str(i+1)+"] ["+str(j+1)+"] : "))

    return Mat

def add(Mat1, Mat2):

    row1,col1 = len(Mat1), len(Mat2[0])
    row2,col2 = len(Mat2), len(Mat2[0])

    if row1==row2 and col1 == col2:
        res = [[0 for i in range(col1)] for j in range(row1)]

        for i in range(row1):
            for j in range(col1):
                res[i][j] = Mat1[i][j] + Mat2[i][j]

        return res

    else:
        print("Addition Not Possible")

def sub(Mat1, Mat2):
    row1,col1 = len(Mat1), len(Mat2[0])
    row2,col2 = len(Mat2), len(Mat2[0])

    if row1==row2 and col1 == col2:
        res = [[0 for i in range(col1)] for j in range(row1)]

        for i in range(row1):
            for j in range(col1):
                res[i][j] = Mat1[i][j] - Mat2[i][j]

        return res

    else:
        print("Subtraction Not Possible")

def display(Mat):
    for i in Mat:
        print(i)

def transpose(Mat):
    row1,col1 = len(Mat), len(Mat[0])

    res = [[0 for i in range(row1)] for j in range(col1)]

    for i in range(col1):
        for j in range(row1):
            res[i][j] = Mat[j][i]
    return res

def multiply(Mat1, Mat2):

    row1,col1 = len(Mat1), len(Mat2[0])
    row2,col2 = len(Mat2), len(Mat2[0])

    if col1 == row2:
        res = [[0 for i in range(col2)] for j in range(row1)]

        for i in range(row1):
            for j in range(col2):
                for k in range(row2):
                    res[i][j] += Mat1[i][k] * Mat2[k][j]
        return res

    else:
        print("Multiplication not Possible")



row = int(input("Rows: "))
col = int(input("Col: "))

Mat1 = Mat_Cre(row,col)
Mat2 = Mat_Cre(row,col)

display(add(Mat1,Mat2))

display(sub(Mat1,Mat2))


display(transpose(Mat1))

display(multiply(Mat1,Mat2))

        
