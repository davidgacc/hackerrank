##
## Diagonal Difference

#Given a square matrix, calculate the absolute difference between the sums of its diagonals.
#https://www.hackerrank.com/challenges/diagonal-difference/problem

# Complete the diagonalDifference function below.
def diagonalDifference(arr):
    sum_first=0
    sum_second =0
    for i in range(len(arr)):
        for j in range(len(arr)):
            if(i==j):
                sum_first +=arr[i][j]
            if(i==len(arr)-1-j):
                sum_second +=arr[i][j]
    return abs(sum_first-sum_second)
    
