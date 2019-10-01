#!/usr/bin/python
c = 1; gr = 0; in = 0; total = 0; dr = 0
c = int(c); gr = int(gr); in = int(in)
total = int(total); dr = int(dr)
while c == 1:
    a, b = input().split(" ")
    a = int(a)
    b = int(b)
    c = int(input("Novo grenal (1-sim 2-nao)"))
    total = total + 1
    if a > b:
        gr = gr + 1
    else:
        in = in + 1
    if a == b:
        dr = dr + 1
print(total, "grenais\nInter:", in, "\nGremio:", gr)
if gr > in:
    print("Gremio venceu mais")
if in > gr:
    print("Inter venceu mais")
else:
    print("Nao houve vencedor")
