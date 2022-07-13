fruit = 'banana'
i=2
# letter = fruit[1]
# letter=fruit[i]
# print(letter)
# print(len(fruit))

length=len(fruit)
letter=fruit[length-1]
# print(letter)

# index=0
# while index < len(fruit):
#     print(fruit[index])
#     index += 1

# print('\n')

# for letter in fruit:
#     print(letter)

# prefix='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
# suffix='ash'
# 
# for letter in prefix:
    # print(letter+suffix)

# prefix='btl'
# suffix='ag'

# for n in prefix:
#     print(n+suffix)

# print(fruit[:5])

greeting='Hello World'
# print('J'+greeting[1:])

def find(word,letter,i):
    index=0
    while index < len(word):
        if word[index+i]==letter:
            return index
        index+=1
    return -1

# print(find('abhayz','z',2))

# word='banana'
# count=0
# for i in word:
#     if i=='a':
#         count+=1
# print(count)

def count(string,letter):
    count=0
    for i in string:
        if i==letter:
            count+=1
    return count

# print(count('abhayisagoodboya','a'))

# a='abhay'
# b=a.upper()
# print(b)
# c=a.find('hay', 0)
# print(c)

# print('samb' in 'sambhav')

def in_both(word1,word2):
    for letter in word1:
        if letter in word2:
            print(letter)
    return 'done'

# print(in_both('apples' , 'oranges'))

# word='banana'

# if word < 'banana':  
#     print('Your word, ' + word + ', comes before banana.')
# elif word > 'banana':
#     print('Your word, ' + word + ', comes after banana.')
# else:
#     print('All right, bananas.')

def is_reverse(word1,word2):
    if len(word1) != len(word2):
        return False
    i=0
    j=len(word2)-1
    while j > 0:
        if word1[i]!=word2[j]:
            return False
        i+=1
        j-=1
    return True

# print(is_reverse('abcd','dcaa'))

def counta(word):
    return count(word,'a')

# print(counta('banana'))

def oneliner_palindrome(word):
    if word[::1]==word[::-1]:
        return True
    else :
        return False
# print(oneliner_palindrome('abhayahba'))

# print(find('abhay','a',1))

def lowercase0(s):
    """This check whether the given s(word) is in lowercase"""
    for n in s:
        if s.lower()==s:
            return True
        else:
            return False

def lowercase1(s):
    """Does nothing because when a given string is lowercased then there is nothing to do with if statement without equal or similar symbols"""
    for n in s:
        if 'n'.lower():
            return True
        else:
            return False

def lowercase2(s):
    """Returns the first character of string with lowercase applied"""
    for n in s:
        flag=n.lower()
        return flag

def lowercase3(s):
    """Returns some assignment error UnboundLocalError: local variable 'flag' referenced before assignment"""
    for n in s:
        flag=flag or n.lower()
        return flag

def lowercase4(s):
    """Checks that the given s(word or sentence) doesn't have lowercase"""
    for n in s:
        if not n.lower():
            return False
        return True

# print(lowercase4('abhay'))

# print(ord('z')) # a is 97 and z is 122
# print(chr(122))
# def rotate_word(word,num):
#     for n in word:
#         a=ord(n)+num
#         z=chr(a)
#         print(z,end='')
#     return '\nDone rotation'
# print(rotate_word('abhay',7))

def rotate_letter(a,n):
    if a.isupper():
        start=ord('A')
    elif a.islower():
        start=ord('a')
    else:
        return a

    c=ord(a)-start
    i=(c+n)%26+start
    return chr(i)

def rotate_word(a,n):
    for z in a:
        print(rotate_letter(z,n))
    return '\nDone'

# print(rotate_word('melon',-10))

