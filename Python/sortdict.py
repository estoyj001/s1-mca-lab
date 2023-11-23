d = {
	4 : "Junaid",
	3 : "Faheem",
	7 : "Raseen",
	1 : "Ajay",
	5 : "Asif",
	10 : "Imthiyas" 
}

print("dictionary before sorting : ",d)
ds = sorted(d.items())
print("dictionary after sorting in ascending order : ",ds)
ds = sorted(d.items(),reverse=True)
print("dictionary after sorting in descending order : ",ds)

