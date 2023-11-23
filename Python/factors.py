n = int(input("Enter a number : "))
f = []
for x in range(1,n+1):
	if(n%x==0):
		f.append(x)
print("The factors of ",n," are : ",end=" ")
for x in f:
	print(x,end=" ") 
