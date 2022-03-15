n=int(input())
a=list(map(int,input().split()))[:n]
counter=1
while(counter<n):
    for i in range(0,n-counter):
        if a[i]>a[i+1]:
            temp=a[i]
            a[i]=a[i+1]
            a[i+1]=temp
    counter=counter+1
print(a)