n=int(input())
def fib(n):
    t1=0
    t2=1
    for i in range(1,n+1):
        print(t1)
        nt=t1+t2
        t1=t2
        t2=nt
fib(n)