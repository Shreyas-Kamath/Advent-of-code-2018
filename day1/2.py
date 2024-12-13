from collections import defaultdict

with open("sample.txt", 'r') as file:
    content = list(map(int, file.read().split()))

sum = 0 
seen = defaultdict(int)

exit = False
while 2 not in seen.values():
    for num in content:
        if exit:
            break
        sum += num
        if sum in seen.keys():
            exit = True
        else:
            seen[sum] += 1

print(seen)
print(sum)
