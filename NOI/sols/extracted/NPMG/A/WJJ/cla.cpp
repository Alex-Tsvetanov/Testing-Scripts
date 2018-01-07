command = raw_input()

digit = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]
op = ["+", "-"]

cmds = []

class line:
    def __init__(self):
        self.x1 = 0
        self.x2 = 0
        self.y1 = 0
        self.y2 = 0

    def isOfUse(self):
        if self.y1 == self.y2:
            return False
        return True

    def __str__(self):
        return " X1: " + str(self.x1) + " X2: " + str(self.x2) + " Y1: " + str(self.y1) + " Y2: " + str(self.y2)

    def s(self):
        x1, x2 = self.x1, self.x2
        self.x1 = min(x1, x2)
        self.x2 = max(x1, x2)

        y1, y2 = self.y1, self.y2
        self.y1 = min(y1, y2)
        self.y2 = max(y1, y2)

def parse(command, cmds):
    b = ""
    prev = ""
    for i in range(len(command)):
        c = command[i]
        if c in digit:
            if prev in digit:
                b += c
            else:
                b = c
        elif c in op:
            if prev in digit:
                cmds.append(int(b))
                b = ""
            cmds.append(c)
        else:
            raise "Not valid"
        prev = c
    if prev in digit:
        cmds.append(int(b))
    #print(cmds)

parse(command, cmds)

maxX, maxY, minX, minY = 0, 0, 0, 0

posX, posY = 0, 0
direction = 0
lines = []
cline = line()
cline.x1 = 0
cline.y1 = 0
for c in cmds:
    if c in op:
        if c == "+":
            direction += 1
            if direction > 3:
                direction = 0
        elif c == "-":
            direction -= 1
            if direction < 0:
                direction = 3
    else:
        if direction == 0:
            posX += c
            maxX = max(posX, maxX)
        elif direction == 1:
            posY += c
            maxY = max(posY, maxY)
        elif direction == 2:
            posX -= c
            minX = min(posX, minX)
        elif direction == 3:
            posY -= c
            minY = min(posY, minY)

        cline.x2 = posX
        cline.y2 = posY
        if cline.isOfUse():
            cline.s()
            lines.append(cline)
            #print("Useful", str(cline))
        cline = line()
        cline.x1 = posX
        cline.y1 = posY

#print("MaxX", maxX, "MaxY", maxY, "MinX", minX, "MinY", minY)

area = 0

sweep = dict()

for y in range(minY, maxY):
    sweep[y] = False

for x in range(minX, maxX):
    for l in lines:
        if l.x1 == x:
            for y in range(l.y1, l.y2):
                sweep[y] = not sweep[y]
    for y in range(minY, maxY):
        if sweep[y] == True:
            area += 1
            
    
#100+40+40+20-20-20+40+40
#-100+40+40+20-20-20+40+40
#+100+40+40+20-20-20+40+40

print area



