#time库的基操

import time

print(time.time(),"\n")
print(time.ctime(),"\n")
print(time.gmtime(),"\n")

t = time.gmtime()
print(time.strftime("%Y-%m-%d %H:%M:%S",t),"\n")

timeStr = '2022-01-13 13:14:15'
print(time.strptime(timeStr,"%Y-%m-%d %H:%M:%S"),'\n')


start = time.perf_counter() #返回一个CPU级别的精确时间计数值，单位为秒
s = ['*']*34
w = '这个程序一直在运行哈哈哈哈哈......'
for i in range(20):
    if i<14:
        s.pop(i+1)
        s[i]=(list(w))[i]
        k = ''.join(s)
        print(k)
        time.sleep(0.2)    #休眠0.2s
    else:
        s[i]=(list(w))[i]
        k = ''.join(s)
        print(k)
        time.sleep(0.2)        
end = time.perf_counter()
print("\n")
print("这个程序运行了{}秒".format(end-start))
