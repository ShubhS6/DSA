n=int(input())
a=list(map(int,input().split()))[:n]
for i in range(n-1):
    for j in range(i+1,n):
        if a[i]>a[j]:
            temp=a[i]
            a[i]=a[j]
            a[j]=temp
print(a)