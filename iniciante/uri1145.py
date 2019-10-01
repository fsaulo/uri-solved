import sys

x, y = input().split(" ")
x = int(x)
y = int(y)
def main(argv):
    p=1; i=0
    c=0
    for a in range(0,y):
        print(a+1, end='')
        if c == x-1:
            print(end='\n')
            c=0
        else:
            print(end=' ')
            c+=1

if __name__ == "__main__":
    main (sys.argv)
