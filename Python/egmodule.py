
def numpattern():
	n = int(input("Enter number of rows : "))
	for i in range(n+1):
		for j in range(1,i+1):
			print(i*j,end=" ")
		print("\n")
def star():
	n = int(input("Enter number of rows : "))
	for i in range(n+1):
		 for j in range(1,i+1):
		 	print("*",end=" ")
		 print("\n")
	for i in reversed(range(n+1)):
		for j in range(1,i+1):
			print("*",end=" ")
		print("\n")

