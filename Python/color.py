c1 = ["Magenta", "Lavender", "Turquoise","Black", "Pink"]
c2 = ["Black", "Pink","Red","Yellow","Indigo"]
print("List 1 of Colors : ",c1,"\n","List 2 of Colors : ",c2)
c11 = set(c1)
c22 = set(c2)
c3 = c11.difference(c22)
c33 = list(c3)
print("Colors that are in List 1 but not in List 2 : " , c33)
