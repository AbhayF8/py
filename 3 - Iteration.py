import math

def countdown(n):
    while n>0:
        print(n)
        n=n-1
    print("bomb blasted")

# countdown(99)

def sequence(n):
    while n !=1:
        print(n)
        if n%2==0:
            n=n/2
        else:
            n=n*3+1

# sequence(3)

# while True:
#     line=input('>')
#     if line == 'done':
#         break
#     print(line)
# print('Done !')

# a=4
# x=3
# y=(x+a/x)/2
# print(y)

# x=y
# y=(x+a/x)/2
# print(y)

# x=y
# y=(x+a/x)/2
# print(y)

# x=y
# y=(x+a/x)/2
# print(y)

# while True:
#     a=4
#     x=3
#     print(x)
#     y=(x+a/x)/2
#     # if y== x:
#     #     break
#     if abs(y-x) < epsilon:
#         break
#     x=y

## Python program to print the data 
# d = {1: ["Python", 33.2, 'UP'], 
# 2: ["Java", 23.54, 'DOWN'], 
# 3: ["Ruby", 17.22, 'UP'], 
# 10: ["Lua", 10.55, 'DOWN'], 
# 5: ["Groovy", 9.22, 'DOWN'], 
# 6: ["C", 1.55, 'UP'] } 
# print ("{:<8} {:<15} {:<10} {:<10}".format('Pos','Lang','Percent','Change')) 
#   for k, v in d.items():
#       lang, perc, change = v
#       print ("{:<8} {:<15} {:<10} {:<10}".format(k, lang, perc, change))

def mysqrt(a):
    x = a/2
    while True:
        y = (x+ a/x) / 2
        if y == x:
            return x
        x = y
    
## Python program to print the data
# d = {1: ["Python", 33.2, 'UP'],
# 2: ["Java", 23.54, 'DOWN'],
# 3: ["Ruby", 17.22, 'UP'],
# 10: ["Lua", 10.55, 'DOWN'],
# 5: ["Groovy", 9.22, 'DOWN'],
# 6: ["C", 1.55, 'UP'] }
# print ("{:<8} {:<15} {:<10} {:<10}".format('Pos','Lang','Percent','Change'))
# for k, v in d.items():
#     lang, perc, change = v
#     print ("{:<8} {:<15} {:<10} {:<10}".format(k, lang, perc, change))

def test_square(a):
    print('a',"{:<5}mysqrt(a){:<20}math.sqrt(a){:<20}diff".format('','','',''))
    print('-',' '*4,'-'*9,' '*18,'-'*12,' '*18,'-'*4)
    while a<10:
        # diff=mysqrt(a)-math.sqrt(a)
        diff=abs(mysqrt(a)-math.sqrt(a))
        print("{:<7}{:<29}{:<31}".format(a,mysqrt(a),math.sqrt(a)),diff)
        # a=a+1
        a += 1
# test_square(1)

# print(eval('6+9'))

def eval_loop():
    while True:
        n=input("Enter what u want to evaluate? \nabhay@dr460nized in ~ via  v3.9.6 \nλ> ")
        if n=='done':
            break
        else:
            print( eval(n) )

# eval_loop()

def factorial(n):
    if n==0:
        return 1
    else:
        recurse=factorial(n-1)
        result=recurse*n
        return result

def estimate_pi():
    """Computes an estimate of pi.
    Algorithm due to Srinivasa Ramanujan, from 
    http://en.wikipedia.org/wiki/Pi
    """
    total = 0
    k = 0
    factor = 2 * math.sqrt(2) / 9801
    while True:
        num = factorial(4*k) * (1103 + 26390*k)
        den = factorial(k)**4 * 396**(4*k)
        term = factor * num / den
        total += term
        
        if abs(term) < 1e-15:
            break
        k += 1

    return 1 / total

# print(estimate_pi())

print('This last excercise need to be done again by me in future')