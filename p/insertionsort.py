n=int(input())
a=list(map(int,input().split()))[:n]
for i in range(1,n):
    current=a[i]
    j=i-1
    while(a[j]>current and j>=0):
        a[j+1]=a[j]
        j=j-1
    a[j+1]=current
print(a)