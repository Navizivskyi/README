import random
arr = []
for i in range(0,30):
    arr.append(random.randrange(-100,100))
print("Numbers:",arr)
print("Max:",max(arr))
for index,a in enumerate(arr):
    if a == max(arr):
        print("Index of number: %s = %s" % (a,index))
odd = []
for b in arr:
    if b % 2 != 0:
        odd.append(b)
if len(odd) == 0:
    print("No")
else:
    print("Odd numbers:",sorted(odd,reverse=True))

for i in range(30):
    if arr[i] < 0 and arr[i+1] < 0:
        print("Couples of odd numbers:",arr[i], arr[i+1], "\n")
