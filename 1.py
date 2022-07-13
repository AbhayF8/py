import turtle as t

def koch(t,n):
    """draws a koch curve with the given length n and t as turtle"""
    if (n<3):
        t.fd(n)
        return n
    else:
        koch(t,n/3)
        t.lt(60)
        koch(t,n/3)
        t.rt(120)
        koch(t,n/3)
        t.lt(60)
        koch(t,n/3)
# to draw a snowflake with 3 parts
# for i in range(3):
#     koch(t,180)
#     t.rt(120)
def snowflake(t,n,a):
    for i in range(a):
        koch(t,n)
        t.rt(360/a)
snowflake(t,180,8)
t.mainloop()