n1 = int(input("enter number of element for first list : "))
n2 = int(input("enter number of element for second list : "))
l1 = []
l2 = []
for i in range(0,n1):
	x = int(input("enter element for first list : "))
	l1.append(x)
for i in range(0,n2):
	x = int(input("\nenter element for second = list : "))
	l2.append(x)
if(n1==n2):
	print("\nthe two lists are of the same length")
else:
	print("\nthe two lists are not of the same length")
total = 0
for i in range(0,n1):
	total+= l1[i]
summ = total
total = 0
for i in range(0,n2):
	total+=l2[i]
if(summ==total):
	print("the 2 lists have equal sum")
else:
	print("2 lists varies in sum")

one = set(l1)
two = set(l2)
if(one & two):
	print("\ncommon elements exist : ", one & two)
else:
	print("\nno common elements")
