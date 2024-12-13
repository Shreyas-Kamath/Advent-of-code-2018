ans = 0
with open ("input.txt", 'r') as file:
    for line in file:
        ans += int(line)
print(ans)