# bingo count

import numpy as np


board=[[6,15,17,14,23],[5,12,16,13,25],[21,4,2,1,22],[10,20,3,18,8],[11,9,19,24,7]]  #bingo board
nums=[15,7,2,25] # delete number

for i in range(0,len(nums)):
    for j in range(0,len(board)):
        for k in range(0,len(board[0])):
            if(nums[i]==board[j][k]):
                board[j][k]=None
                break

answer=0
for i in range(0,len(board)):
    for j in (0,len(board[0])-1):

        if(board[i][j]!=None):
            break
        elif(j==len(board[0])-1):
            answer=answer+1
j=0
for i in range(0,len(board)):
     if(board[i][j]!=None):
        break
     elif(j==len(board[0])-1):
        answer=answer+1
     j=j+1


for i in range(0,len(board)):
    for j in (0,len(board[0])-1):
        if(board[j][i]!=None):
            break
        elif(j==len(board[0])-1):
            answer=answer+1



print(answer)