#关于python较换 a b 值的 方法
a = 3
b = 5
print("开始时：a = {} , b = {}".format(a,b))

def ChangeFirst(a,b):  #取第三变量C暂存
    c = a
    a = b
    b = c
    print("ChangeFirst方法交换后 ：a = {} , b = {}".format(a,b))


def ChangeSecond(a,b): #用和与差
    a = a+b
    b = a-b
    a = a-b
    print("ChangeSecond方法交换后：a = {} , b = {}".format(a,b))


def ChangeThird(a,b):  #按位异或（按二进制位，相同为0不同为1）
    a = a^b
    b = a^b
    a = a^b
    print("ChangeThird方法交换后 ：a = {} , b = {}".format(a,b))


def ChangeFourth(a,b):  #python特有的方法
    a,b = b,a
    print("ChangeFourth方法交换后：a = {} , b = {}".format(a,b))

ChangeFirst(a,b)
ChangeSecond(a,b)
ChangeThird(a,b)
ChangeFourth(a,b)
