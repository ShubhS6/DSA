'''
n=int(input())
a=list(map(int,input().strip().split()))[:n]
key=int(input())
for i in range(n):
    if(a[i]==key):
        print(i)
        break
    elif(i==n-1):
        print("key is not in the list")
        break
    
'''
n=int(input())
a=list(map(int,input().strip().split()))[:n]
key=int(input())
start=0
end=n
while(start<=end):
    mid=(start+end)//2
    if(a[mid]==key):
        print(mid)
        break
    elif(a[mid]>key):
        end=mid-1
    else:
        start=mid+1
    if(start==end):
        print("key is not found")
        break