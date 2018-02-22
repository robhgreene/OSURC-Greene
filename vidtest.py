import numpy as np
import cv2
import os
import matplotlib
x=0
os.system('cls')
fn= r'C:\Users\magne\OneDrive - Oregon State University\pythonscripts\CV\jb.avi '

print fn
cap = cv2.VideoCapture(fn,0)
#cap.open(0)

delay=1

while(1):
    #begin VideoCapture
    ret,frame = cap.read()
    # if cap.isOpened():
    #     print "opened\n\n"
    # else:
    #     print "not opened\n\n"

    #frame operation
    gray = cv2.cvtColor(frame,cv2.COLOR_BGR2GRAY)
    #display frame
    cv2.imshow('frame',gray)
    if cv2.waitKey(delay) & 0xFF == ord('q'):
        break

cap.release()
cv2.destroyAllWindows()
