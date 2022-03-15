n=int(input())
for i in range(1,n+1):
    for j in range(1,n-i+1):
        print(" ",end="")
    for j in range(i,0,-1):
        print(j,end="")
    s=2
    for j in range(1,i):
        print(s,end="")
        s=s+1
    print()