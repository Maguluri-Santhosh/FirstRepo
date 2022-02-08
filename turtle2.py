import turtle

t = turtle.Turtle()
s = turtle.Screen()
s.bgcolor("black")
t.width(2)
t.speed(20)

col = ('white','pink','cyan','red','green')
for i in range (300):
    t.pencolor(col[i%5])
    t.forward(i*6)
    t.right(121)