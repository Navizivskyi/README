print("Input your string:")
line = input()

newline = ""
numarr = []

for index, i in enumerate(line):
    if i >= '0' and i <= '9':
        numarr.append([int(i), int(index)])         #Числа та індекси

for i in line:
    if i >= '0' and i <= '9':
        continue                    #Без чисел
    else:
        newline += i

print("Without numbers:", newline)
print("Numbers and index:", numarr)

words = line.split()

for index, i in enumerate(words):
    words[index] = words[index][0].upper() + words[index][1:-1] + words[index][-1].upper()  #Великі букви
print("First and last capital letter:",''.join(words))

maxn = 0                        #якщо нема чисел в рядку = 0
for i in numarr:
    if int(i[0]) > maxn:        #Максимальне число
        maxn = int(i[0])

degreearr = []
for i in numarr:
    if int(i[0]) != maxn:
        degreearr.append([i[0], i[1], i[0]**i[1]])  #Підвищення чисел до степенів за їх індексом

print("Max number:",str(maxn))
print("(number, index, to degree):", degreearr)
