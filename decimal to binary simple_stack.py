#taking input an integer
x=int(input())
l=[]
s=0
while(x>=1):
  s=x%2
  
  #push in stack
  l.append(s)
  x=x//2
t=""
for i in range(0,len(l)):
  #pop in stack
  t=t+str(l.pop())

print(t)
