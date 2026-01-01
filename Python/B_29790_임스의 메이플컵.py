n, u, l = map(int, input().split())

if n >= 1000:
    n_ok = True
else:
    n_ok = False

if u >= 8000 or l >= 260:
    m_ok = True
else:
    m_ok = False

if n_ok and m_ok:
    print("Very Good")
elif n_ok and not m_ok:
    print("Good")
else:
    print("Bad")