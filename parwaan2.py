n=int(input())
a=(n*(n+1))/2

n1 = 0
n2 = 1
count = 0
arr=[]

while count < a:


  arr.append(n1)
  nth = n1 + n2
  
  n1 = n2
  n2=nth
  count += 1



num=0

k = 2*n - 2

  
    # outer loop to handle number of rows 
for i in range(0, n): 
      
        # inner loop to handle number spaces 
        # values changing acc. to requirement 
        for j in range(0, k): 
            print(end=" ") 
      
        # decrementing k after each loop 
        k = k - 1
      
        # inner loop to handle number of columns 
        # values changing acc. to outer loop 
        for j in range(0, i+1): 
          
            # printing stars 
            print(arr[num], end=" ") 
            num=num+1
      
        # ending line after each row 
        print("\r") 