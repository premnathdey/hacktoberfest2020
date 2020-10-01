def fib(n):
    a=0
    b=1
    f=0
    if n >2 :
         for i in range(3,n):
             f= a+b
             a=b
             b=f
    if n==1:
        f=0
    if n==2:
        f=1
    return f
print(fib(int(input("Enter n : ")))
