import sys

n = int(input())

def pum(x):
    print("PUM")
    x += 1
    return x

def main(argv):
    p = 1
    for i in range(n):
        for i in range(3):
            print(p, end=' ')
            p+=1
        p = pum(p)

if __name__ == "__main__":
    main(sys.argv)
