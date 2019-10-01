#!/usr/bin/env python3

N = int (input())

while N > 0:
    i = 0
    P = []
    G = []
    data = input().split(' ')
    for item in data:
        if i < 2:
            P.append(int(item))
            i += 1
        else:
            G.append(float(item))
    yrs = 0
    while P[0] <= P[1]:
        yrs += 1
        if yrs > 100:
            print('Mais de 1 seculo.')
            break
        else:
            for i in range(len(P)):
                P[i] += int(P[i] * G[i]/100)

    if yrs <= 100:
        print('{} anos.'.format(yrs))
    N -= 1
