#!/usr/bin/python3
def magic_calculation(a, b):
    test = 0
    for i in range(1, 3):
        try:
            if i > a:
                raise Exception("Too far")
            else:
                test += (a**b) / i
        except:
            test = b + a
            break
        return test
