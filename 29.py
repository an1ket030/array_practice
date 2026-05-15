# question 2


def celebrity(mat):
    candidate = 0       
    n = len(mat) 

    for i in range(1, n):
        if mat[candidate][i] == 1:
            candidate = i    
    

    for i in range(n):
        if mat[candidate][i] == 1 and i != candidate:
            return -1
    
    
    for i in range(n):
        if mat[i][candidate] == 0 and i != candidate:
            return -1
    
    
    return candidate
    
print(celebrity([[1,1,0],[0,1,0],[0,1,1]]))  # should return 1
print(celebrity([[0,1],[1,0]]))               # should return -1
print(celebrity([[0]]))                       # should return 0