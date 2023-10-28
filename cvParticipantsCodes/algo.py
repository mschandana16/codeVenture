# This is the code for level 2 of the hunt
def algo(n):
    if n == 1:
        return "1"
    if n == 2:
        return "11"

    s = "11"
    for i in range(3, n + 1):
        s += "$"
        l = len(s)
        count = 1
        tmp = ""
        for j in range(1, l):
            if s[j] != s[j - 1]:
                tmp += str(count)
                tmp += s[j - 1]
                count = 1
            else:
                count += 1
        s = tmp
    return s


# Initialize X with the number you got from level_1 and use it
# X =
print(algo(X))
