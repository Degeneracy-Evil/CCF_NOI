def fun():
    print('This is a fun')


class Lq(object):
    def fun(self):
        print('Maybe you can marry with me')

    def __init__(self):
        print('It is in a class(Lq)')


lq = Lq()
lq.fun()
fun()
