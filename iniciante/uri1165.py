#!/usr/bin/env python3

N = int(input())

while N > 0:
    IsPrime = 1
    case = int(input())
    for TestFactor in range(2, case):
        if (not case % TestFactor):
            IsPrime = 0
            break
    if (IsPrime):
        print('{} eh primo'.format(case))
    else:
        print('{} nao eh primo'.format(case))
    N -= 1

