#coding: utf-8

raw_in = input()
a, b = raw_in.split()
sum = int(a)+int(b)

if sum < 0 :
    print("-", end="")
    sum = -sum


if sum >= 1000000 :
    print("%d,%03d,%03d" % (sum/1000000, sum/1000%1000, sum%1000))
elif sum >= 1000:
    print("%d,%03d" % (sum/1000, sum%1000))
else:
    print("%d" % (sum))
