n = int(input())

if n == 0:
    print("NO")
else:
    is_samsam = True
    while n > 0:
        r = n % 3
        if r > 1:
            is_samsam = False
            break
        n //= 3

    if is_samsam:
        print("YES")
    else:
        print("NO")