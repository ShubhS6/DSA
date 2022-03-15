a=int(input())
b=int(input())
c=int(input())
def pt(x,y,z):
    k=max(x,max(y,z))
    if k==x:
        a=y
        l=z
    elif k==y:
        a=x
        l=z
    elif k==z:
        a=y
        l=x
    if(k*k==a*a+l*l):
        return True
    else:
        return False
print(pt(a,b,c))