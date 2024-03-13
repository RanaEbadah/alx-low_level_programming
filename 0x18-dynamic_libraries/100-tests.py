import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops._add(a, b)))
print("{} - {} = {}".format(a, b, cops._sub(a, b)))
print("{} x {} = {}".format(a, b, cops._mul(a, b)))
print("{} / {} = {}".format(a, b, cops._div(a, b)))
print("{} % {} = {}".format(a, b, cops._mod(a, b)))
