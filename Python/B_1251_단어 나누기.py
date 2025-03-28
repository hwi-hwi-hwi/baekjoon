s = input()
n = len(s)

best = "~"

for i in range(1, n-1):
    for j in range(i+1, n):
        part1 = s[:i][::-1]      # 0 ~ i-1
        part2 = s[i:j][::-1]     # i ~ j-1
        part3 = s[j:][::-1]      # j ~ n-1
        
        result = part1 + part2 + part3
        
        best = min(best, result)

print(best)