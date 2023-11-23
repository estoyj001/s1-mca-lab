print("Enter items to list")
l = []
for x in range(6):
	i = input("\n")
	l.append(i)
maxleng = 0
for i in l:
	if(len(i)>maxleng):
		maxleng = len(i)
		maxx = i
print("Biggest string : ",maxx)
