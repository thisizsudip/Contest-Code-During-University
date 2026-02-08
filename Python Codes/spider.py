import tkinter
from PIL import Image, ImageTk
import random
root = tkinter.Tk()
root.attributes('-fullscreen',True)
root.attributes('-topmost',True)
width = root.winfo_screenwidth()
height = root.winfo_screenheight()
canvas = tkinter.Canvas(root, width = width, height = height, bg= 'black', highlightthickness = 0)
canvas.pack()
img = Image.open("/home/sajib/Documents/Codes/Python Codes/hack.jpg")
spider_img = ImageTk.PhotoImage(img)
canvas.spider_img = spider_img 

def add_spider():
    x = random.randint(0, width)
    y = random.randint(0, height)
    canvas.create_image(x, y, image = spider_img)
    root.after(500, add_spider)
root.protocol('WM_DELETE_WINDOW', lambda: None)[                            ]
add_spider()    
root.mainloop()
