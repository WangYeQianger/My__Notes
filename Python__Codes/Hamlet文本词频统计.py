#统计文本词频
def getText():
    txt = open("../实例资料/hamlet.txt","r").read()   #../是在上一级目录中寻找
    txt = txt.lower()
    for ch in '!"#$%&()*+,-./:;<>=?@[\\}^_{}|～‘·’':
        txt = txt.replace(ch,"")  #符号后面本身自带空格
    return txt

hamletTxt = getText()
words = hamletTxt.split()
counts = {}
for word in words:
    counts[word] = counts.get(word,0) + 1
items = list(counts.items())
items.sort(key = lambda x:x[1],reverse = True)
for i in range(10):
    word,count = items[i]
    print("{0:<10}{1:>5}".format(word,count))
