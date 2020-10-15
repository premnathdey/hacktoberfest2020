def fib(n):
    a=1
    b=1
    
    if n==1:
        sum=1
    elif n>=2:
        sum=2
        for i in range(2,n):
            c = a+b
            a = b
            b = c
            sum+=c
    return sum

print(fib(int(input("Enter n : "))))
