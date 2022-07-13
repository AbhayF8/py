from random import randint
cheeses = ['Cheddar', 'Edam', 'Gouda']
numbers = [42, 123, 3]
# empty = []
# print(cheeses, numbers, empty)
# print(cheeses[1])
numbers[1] = 1
# print(numbers) # List are mutable

# print(1 in numbers)
# print(cheeses[-1])

# for cheese in cheeses:
# print(cheese)

for i in range(len(numbers)):
    numbers[i] = numbers[i] * 2
    # print(numbers)

# for i in []:
    # print('Hi')

a = (1, 2, 3, 4)
b = (5, 6, 7, 8)
c = a+b
# print(c)

# print(c*4)

t = ['i', 'm', 'a', 'g', 'b']
# print(t[1:4])

t[1:3] = ['x', 'y']
# print(t)

t.append('abhay')
# print(t)

t1 = ['a', 'b', 'c']
t2 = ['d', 'e']
t1.extend(t2)
# print(t1)

alphabets = ['z', 'w', 'r', 'a', 'b']
alphabets.sort()
# print(alphabets)

list1 = [1, 2, 3, 4, 5, 6, 7, 8, 9]


def add_all(list1):
    total = 0
    for i in list1:
        total += i
    return total

# print(add_all(list1))

# print(sum(list1))


temp = ['a', 'b', 'c', 'd']


def capitalize_all(a):
    res = []
    for s in a:
        res.append(s.capitalize())
    return res

# print(capitalize_all(temp))


list2 = ['A', 'b', 'c', 'D']


def only_upper(a):
    res = []
    for n in a:
        if n.isupper():
            res.append(n)
    return res
# print(only_upper(list2))


list2.pop(0)


# print(list2)


list2.remove('D')
# print(list2)

list12 = ['as', 'is', 'does', 'not', 'matter']
del list12[1:3]
# print(list1)

s = 'spam'
t = list(s)
# print(t)

d = 'hey we are here what u r searching for'
ps1 = d.split()
# print(ps1)

s1 = 'spam-spam-spam'
delimiter = '-'
t1 = s1.split(delimiter)
# print(t1)

t2 = ['hello', 'im', 'here', 'so', 'what!']
delimiter1 = ' '
t3 = delimiter1.join(t2)
# print(t3)

ab = 'banana'
bc = 'banana'
# print(a is b)

a1 = [1, 2, 3]
b1 = [1, 2, 3]

# print(a1 is b1)
a2 = a1
# print(a2)

a21 = 1
# print(a1,a21)


def delete_head(t):
    del t[0]


letters1 = ['a', 'b', 'c']
delete_head(letters1)
# print(letters1)

t4 = [1, 2]
# t55 = t4.append(3)
# print(t4)

t6 = t4+[4]
# print(t4)
# print(t6)


def bad_delete_head(t):
    t = t[1:]
    return t


t7 = [1, 2, 3]
# print(bad_delete_head(t7))


def tail(t):
    return t[1:]

# print(tail(t7))


t11 = [3, 1, 2]
t12 = t11[:]
t12.sort()
# print(t11)
# print(t12)

t13 = sorted(t11)
# print(t13)

# Excercises


def nested_sum(t):
    sum = 0
    for element in t:
        for elements in element:
            sum += elements
    return sum


z = [[1, 2, 3, 4, 5, 5], [3], [8, 9]]
# print(nested_sum(z))


def cumsum(t):
    cumsumlist = []
    for element in t:
        a = element+1
        cumsumlist.append(a)
    return cumsumlist

# print(cumsum(t13))


def middle(t):
    list1a = []
    for items in t:
        if items == t[0]:
            print('1st omitted')
        elif items == t[-1]:
            print('last omitted')
        else:
            list1a.append(items)
    return list1a


y = [1, 2, 3, 4, 5, 6]
# print(middle(y))


def chop(t):
    t.pop()
    t.remove(t[0])
# chop(y)
# print(y)


def is_sorted(t):
    m = t.copy()
    m.sort()
    if t == m:
        return True
    return False
# print(is_sorted(['a','b','c']))


def is_anagram(a, b):
    c = list(a)
    d = list(b)
    c.sort()
    d.sort()
    print(c, d)
    if c == d:
        return True
    return False
# print(is_anagram('listen','silent'))

# using logic of sets


def has_duplicate(a):
    b = set(a)
    if len(a) > len(b):
        return False
    return True
# print(has_duplicate([1,2,3,4,5,5]))


def birthday_paradox():
    days = 365
    students = 23
    listrandom = []
    for a in range(students):
        b = randint(1, days)
        listrandom.append(b)
    print(listrandom, '\nNo. of students are', len(listrandom))
    if has_duplicate(listrandom):
        return True
    return False

# print(birthday_paradox())


def wordlist(f):
    words = open(f)
    newlist = []
    for line in words:
        newlist.append(line)
    return newlist


def wordlist2(f):
    words = open(f)
    newlist = []
    for line in words:
        newlist = newlist+[line]
    return newlist

# print(wordlist('words.txt'))

# left the inlist.py excercise

def reverse(word):
    return word[::-1]

ourwordlist = ['abhay','yahba','vim','miv','nvim','mivn','sheershah','hahsreehs']

def find_reverse_pair(wordlist):
    noofpairsfound=0
    for element in wordlist:
        wordis=element
        for elements in wordlist:
            if wordis==reverse(elements):
                print(wordis,elements)
                noofpairsfound += 1
    if noofpairsfound==0:
        return 'Nothing Found'
    else:
        print('\nNo of Reverse Pairs Found are',noofpairsfound)
    return '\nThis is all we found'


#print(find_reverse_pair(ourwordlist))
n1=0
n2=0
def interlock(word1,word2):
    
print(interlock('shoe','cold'))
