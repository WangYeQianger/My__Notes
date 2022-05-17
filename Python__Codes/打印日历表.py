import calendar
#将星期日（6）设为一周的第一天
calendar.setfirstweekday(firstweekday=6)
#打印某一年日历表
#calendar(year, w=2, l=1, c=6, m=3)：以多行字符串形式返回一年的日历，w每个单元格宽度，默认2，内部已做处理，最小宽度为2，l每列换l行，默认为1，内部已做处理，至少换行1行，c表示月与月之间的间隔宽度，默认为6，内部已做处理，最小宽度为2，m表示将12个月分为m列
print(calendar.calendar(2018, m=3))
