n=int(input())
x=1
ans=0
while n>0:
    y=n%10
    ans=ans+x*y
    x=x*2
    n=n//10
print(ans)