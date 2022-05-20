#表白？？？

import turtle as t
import time
def LittleHeart():
    for i in range(200):
       t.right(1)
       t.forward(2)
love = input("请输入表白语句：")
me = input("请输入您心上人的姓名或者昵称：")
if love == '':
    love = 'I love you'
t.setup(width=800,height=500)
t.color('red','pink')
t.pensize(5)
t.speed(5)
t.up()
t.hideturtle()
t.goto(0,-180)
t.showturtle()
t.down()
t.speed(5)
t.begin_fill()
t.left(140)
t.forward(224)
LittleHeart()
t.left(120)
LittleHeart()
t.forward(224)
t.end_fill()
t.pensize(5)
t.up()
t.hideturtle()
t.goto(0,0)
t.showturtle()
t.color('#CD5C5C','pink')
t.write(love,font=('gungsuh',30,),align="center")
t.up()
t.hideturtle()
if me != '':
    t.color('black','pink')
    time.sleep(10)
    t.goto(180,-180)
    t.showturtle()
    t.write(me,font=(20,),align="center",move=True)
window = t.Screen()
window.exitonclick()
