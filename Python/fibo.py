def fibo(n):
	a = 0
	b = 1
	print(a,"\n",b)
	for x in range(1,n+1):
		c = a + b
		print(c)
		a,b = b,c
n = int(input("Enter a number : "))
fibo(n)
		
	
