# excercise no 5
def getdate():
    import datetime
    return datetime.datetime.now()

z1="Rohit"
z2="Harry"
z3="Hammad"
# Health Management System for Rohan, Harry, Hammad
inputlele = input('Input for whom you want to enter data \n 1. Rohan \n 2. Harry \n 3. Hamad \n Just enter the number ')

puchle = input('1. Excercise \n or \n 2. Diet')

inputmekyakiya = input('Aur Batao kya kya kiya / khaya')


if puchle == 1:
    file1.open('Rohan_Excercise.txt',rw)
    file1.append('['+getdate+']', inputmekyakiya)
else:
    file1=open('Rohan_Diet.txt',rw)
    file1.append('['+getdate+']' , inputmekyakiya)
    file1.close()

