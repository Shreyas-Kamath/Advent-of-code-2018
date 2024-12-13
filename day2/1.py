from collections import Counter

with open("data.txt", 'r') as file:
    content = list(file.read().split('\n'))

def has_2(sequence: str) -> bool:
    if 2 in Counter(sequence).values(): return True
    return False

def has_3(sequence: str) -> bool:
    if 3 in Counter(sequence).values(): return True
    return False

count_2, count_3 = 0, 0

for sequence in content:
    if has_2(sequence): count_2 += 1
    if has_3(sequence): count_3 += 1

print(count_2 * count_3)