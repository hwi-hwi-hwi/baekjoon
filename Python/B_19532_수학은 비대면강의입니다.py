a, b, c, d, e, f = map(int, input().split())

for x in range(-999, 1000):
    for y in range(-999, 1000):
        if a*x + b*y == c and d*x + e*y == f:
            print(x, y)
            exit()


# x = (c - b*y) / a
# y = (f - d*x) / e
# y = (f - d * ((c-b*y) / a)) / e
# y = (af - d(c-by)) / ae
# aey = af - dc + bdy
# y = (af - cd) / (ae - bd)
# det = a*e - b*d
# y = (a*f - c*d) / det
# x = (c*e - b*f) / det
# print(x, y)