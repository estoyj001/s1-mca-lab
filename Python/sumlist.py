n1 = int(input("enter number of element for your list : "))
l1 = []
for i in range(0,n1):
	x = int(input("enter elements for your list : "))
	l1.append(x)
total = 0
for i in range(0,n1):
	total+= l1[i]
print("sum of items in your list = ", total)
