x, y, z = map(int, input().split())

a = min(x,y,z)
c = max(x,y,z)
b = x + y + z - a - c

s = input()
order = {'A': a, 'B': b, 'C': c}

print(order[s[0]], order[s[1]], order[s[2]])
print(a,b,c)