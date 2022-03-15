row=int(input())
for i in range(1,row+1):
    for j in range(1,row+1):
        if(j<=row-i):
            print(" ",end=" ")
        else:
            print("*",end=" ")
    print()
        