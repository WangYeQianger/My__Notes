#汉诺塔搬盘子问题
count = 0
def hanoi(n,src,dst,mid):  # src→源头  dst→目标 n→源头有n个盘子  
    global count
    if n == 1:
        print("将{}号盘子:{}->{}".format(1,src,dst)) #只有一个盘子直接放到目标区域
        count += 1
    else:
        hanoi(n-1,src,mid,dst) #将上面n-1个盘子借助目标区域搬到中间区域上
        print("将{}号盘子:{}->{}".format(n,src,dst)) #这里的n表示n号盘子，把第n个（最下面那个）盘子搬到目标区域上
        count += 1  #步骤+1                          #从上到下为123号盘子
        hanoi(n-1,mid,dst,src) #将中间柱子上的n-1盘子借助起始区域搬到目标区域

print("\n\n\n")
hanoi(3,"A","C","B")
print("一共需要",count,"步")
print("\n\n\n")

#print函数所完成是把一个盘子从起始区域搬到目标区域的操作
#不关注具体操作，只关注链条（基链）
