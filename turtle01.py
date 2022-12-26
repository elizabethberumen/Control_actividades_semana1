import turtle

trltl=turtle.Turtle()
pantalla=turtle.Screen()

trltl.pencolor('blue')
trltl.pensize(4)
trltl.shape('turtle')

n=0
while (n<7):
    n=n+1
    trltl.penup()
    trltl.setpos(0,-n*20)
    trltl.pendown()
    trltl.circle(20*n)