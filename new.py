def maximum(arr):
	max=0;
	for i in range (0,len(arr)):
		if (max<arr[i]):
			max=arr[i]
	return max
print(max([2,4,3]))
		
	
