fin = open('thinkpy.txt')
# for line in fin:
    # word=line.strip()
    # print(word)

# print(fin.readlines())

def read_words_txt(a,n):
    b=open(a)
    for line in b:
        word=line.strip()
        if len(word)>n:
            print(word)

    return '\nDone'

# print(read_words_txt('thinkpy.txt',20))

def has_no_e(a):
    for letter in a:
        if letter=='e':
            return False
    return True

# print(has_no_e('abhay'))

def has_no_e_words():
    b=open('thinkpy.txt')
    x=0
    y=0
    for line in b:
        y+=1
        word=line.strip()
        c=word.find('e')
        if c<0:
            print(word)
            x+=1
    return ('\n'+str(x/y*100)+'%'+' Words dont have e')
# print(has_no_e_words())

def avoids(word,string):
    for n in word:
        for m in string:
            if m==n:
                return False
    return True

# print(avoids('abhay','cda'))

def uses_only():
    n=0
    s=input('Enter the forbidden letters\n>> ')
    letsopen=open('thinkpy.txt')
    for words in letsopen:
        word=words.strip()
        if avoids(word,s):
            n+=1
            print(word)
    return 'No. of Words => '+str(n)
# uses_only()

def uses_all():
    a=input('Enter the word\n>> ')
    b=input('Enter the required letters\n>> ')
    for letters in a:
        if letters not in b:
            return False
    return True

# print(uses_all())

def is_abecedarian(word):
    i=1
    while i < len(word)-1:
        if word[1] > word[i+1]:
            return False
        i=i+1
    return True
# print(is_abecedarian('abh'))

def check_triplets(word):
    i=0
    times=0
    while i<len(word)-1:
        if word[i]==word[i+1]:
            times=times+1
        i=i+1
    if times==3:
        return True
    else: return False
# print(check_triplets('aabhhayy'))

def file_triplets():
    b=open('thinkpy.txt')
    for line in b:
        words=line.strip()
        print(words)
        print(check_triplets(words))
    return '\n>> Done'
    
# print(file_triplets())

def is_palindrome(string):
    a=string[::-1]
    if a==string:
        return True
    else: return False

# print(is_palindrome('aba'))

def write_palindrome_no():
    n=100000
    l=0
    while n<999999:
        m=str(n)
        if is_palindrome(m)==True:
            print(m)
            l=l+1
        n=n+1
    return '\nFound '+str(l)+' numbers.'

# print(write_palindrome_no())

def rev(a):
    b=str(a)
    return b[::-1]

def find_age():
    son=13
    while son < 99:
        mother=int(rev(son))
        diff=mother-son
        if diff==18:
            print(son,mother)
        son=son+1
    return son
print(find_age())

# currently not able to solve this age question will see it later