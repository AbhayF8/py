import math

def area(radius):
    # a=math.pi * radius * radius
    return math.pi * radius * radius

# print(area(7))

def absolute_value(x):
    if x < 0 :
        return -x
    else :
        return x

# print(absolute_value(-99))
# print(abs(-9))

def compare(x,y):
    if x > y :
        return -1
    elif x == y :
        return 0
    else :
        return 1

# print(compare(9,3))

def distance(x1,x2,y1,y2):
    dx=x2-x1
    dy=y2-y1
    dsquared=dx**2 + dy**2
    
    result=math.sqrt(dsquared)
    return result
# print("dx is",dx)
# print("dy is",dy)
# print("dsquared is",dsquared)
# print(distance(2,9,8,5))

def circle_radius(xc, yc, xp, yp):
    radius=distance(xc,yc,xp,yp)
    result = area(radius)
    return result

def circle_area(xc, yc, xp, yp):
    return area(distance(xc, yc, xp, yp))


# print(circle_area(2,22,23,12))

def is_divisible(a,b):
    if a%b==0 :
        return True
    else :
        return False

def can_divide(a,b):
    return a%b ==0

# print(is_divisible(10,9))
# print(can_divide(4,2))

# if is_divisible(2, 3) == True:
    # print('x is divisible by y')

def is_between(x,y,z):
    if x<y<z:
        return True
    else:
        return False

# print(is_between(1,3,12))

def factorial(n):
    if not isinstance(n,int):
        print('Factorial is only defined for integers.')
        return None
    elif n<0:
        print('Factorial is not defined for negative integers.')
    elif n==0:
        return 1
    else:
        recurse=factorial(n-1)
        result=n*recurse
        return result

# print(factorial(-1))

def fibonacci(n):
    if n==0:
        return 0
    elif n==1:
        return 1
    else :
        return fibonacci(n-1) + fibonacci(n-2)

# print(fibonacci(7))

def factorials(n):
    space=' '*(4*n)
    print(space,'factorial',n)
    if n==0:
        print(space,'returning 1')
        return 1
    else:
        recurse=factorials(n-1)
        result=n*recurse
        print(space,'returning',result)
        return result

# print(factorials(8))

def squareof(n):
    space=' '*(4*n)
    print(space,'sq',n)
    if n==0:
        print(space,'is',0)
    else :
        recurse=squareof(n-1)
        result=n**2
        print(space,'is',result)
        return result
# squareof(9)

# Exercise 6.1
def b(z):
    prod = a(z, z) # a(10,9)
    print(z, prod) # 3// z=9 and prod=90
    return prod 
def a(x, y):
    x = x + 1
    return x * y # 4// z is same but x and y are different parameters so z+1,z which is 10*9
def c(x, y, z):
    total = x + y + z # 2// total becomes 1+5+3=9
    square = b(total)**2 # 5// 90*90
    return square
x = 1
y = x + 1
# print(c(x, y+3, x+y)) # 1// x=1,y=5,z=3

# Exercise
def ack(m,n):
    if m==0:
        return n+1
    elif m>0 and n==0:
        return ack(m-1,1)
    elif m>0 and n>0:
        return ack(m-1,ack(m,n-1))

# print(ack(3,4))
# print(ack(4,5)) #Gives recursion error

def first(word):
    return word[0]
def last(word):
    return word[-1]
def middle(word):
    return word[1:-1]

# print(middle('abhay'))

# print(middle('ab')) # there is nothing in middle of 2chars Returns 1 empty line as output
# print(middle('a')) # Same as above
# print(middle(' ')) # Same as above

def is_palindrome(word):
    if len(word) <=1:
        return True
    if first(word)!=last(word):
        return False
    return is_palindrome(middle(word))

# print(is_palindrome('abbcccdcccbba'))

def is_power(a,b):
    if a%b==0 and a/b**1==b:
        return True
    else:
        return False
    
# print(is_power(25,5))

def gcd(a,b):
    if b==0:
        return a
    r=a%b
    return gcd(b,r)

print(gcd(120,105))