

from turtle import*
import os
import sys

print("Figura con colores: \n")

color('red','green')
begin_fill()


#main
while (1):
    forward(400)
    left(35)
    if abs (pos())<1:
        break
end_fill()
done()


