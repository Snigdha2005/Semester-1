row1=list(map(int,input().split()))#input of first row of matrix
matrix=[]#creation of empty list
matrix.extend([row1])#creation of nested lists
y=len(row1)#length of matrix
for i in range(1,y):
    row2=list(map(int,input().split()))#user input of other rows of matrix
    matrix.extend([row2])#adding rows to matrix
transposematrix=[[matrix[k][j] for k in range(y)] for j in range(y)]#creation of new transpose matrix
for i in range(y):#printing the transpose matrix
    print(*transposematrix[i])
