female, male, internship = map(int, input().split())

if female >= 2 * male:
    team = male
    female -= 2 * male
    male -= team
else:
    team = 0
    while female >= 2:
        female -= 2
        male -= 1
        team += 1

while internship > 0:
    if female > 0:
        female -= 1
        internship -= 1
    elif male > 0:
        male -= 1
        internship -= 1
    else:
        team -= 1
        female += 2
        male -= 1
        internship -= 1

print(team)