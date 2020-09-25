import os
from win10toast import ToastNotifier

path = './lab-4'

files = os.listdir(path)
codeFile = open("code.txt", "w")
codeFile.close()
codeFile = open("code.txt", "a")
codeFile.write("\n\t\tName : Anurag Rai\n\n")

for f in files:
    file = open(path + '/' + f, 'r')
    data = file.read()
    codeFile.write(data)
    codeFile.write('\n'+ '-'*100 + '\n \n \n \n')
    file.close()

codeFile.close()
toast = ToastNotifier()
toast.show_toast("Assigment Generator", "Sir your Task has been completed.",duration=30)
