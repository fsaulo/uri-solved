import sys

n = int(input())

def main (argv):
    n_=1
    n1=1
    n2=1

    for i in range(1,n+1):
        if i%2 != 0:
            print(i, n1, n2)
            n1+=1
            n2+=1
            print(i, n1, n2)
            n_+=1
            n1=n_*n_
            n2=n1*n_
        else:
            print(i, n1, n2)
            n1+=1
            n2+=1
            print(i, n1, n2)
            n_+=1
            n1=n_*n_
            n2=n1*n_

if __name__ == "__main__":
    main (sys.argv)
