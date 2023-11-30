def fact(n):
	if(n==1):
		return n
	else:
		return n*fact(n-1)

n = int(input("Enter a number : "))
if(n==0):
	print("The factorial of 0 = 1 ")
else:
	print("The factorial of ",n," = ",fact(n))
