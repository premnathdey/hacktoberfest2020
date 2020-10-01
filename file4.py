print("Hi")
a=input("Enter a string : ")
for i in range(0,len(a)):
    for j in range(len(a)-1,i,-1):
        print(" ",end='')
    for j in range(0,i+1):
        print(a[j],end='')
    if i == 0:
        print("",end='')
    else:
        for j in range(i-1,-1, -1):
            print(a[j],end='')
    print()
