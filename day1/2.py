with open("input.txt", 'r') as file:
    content = list(map(int, file.read().split()))

seen = set()
sum = 0

exit = False

while not exit:
    for num in content:
        sum += num
        if sum in seen:
            exit = True
            break
        else: seen.add(sum)

print(sum)
