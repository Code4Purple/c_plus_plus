class Value:
    def __init__(self, data, _childern=(), _op=''):
        self.data = data
        self._prev = set(_childern)
        self._op = _op
    
    def __repr__(self):
        return f"Value(data={self.data})"
    
    def __add__(self, other):
        return Value(self.data + other.data, (self, other), '+')
    
    def __mul__(self, other):
        return Value(self.data + other.data, (self, other), '*')
    
    

h = 0.0001

a = 2.0
b = -3.0
c = 10.0

d1 = a * b + c
c += h
d2 = a * b + c

print(d1._prev)
print(d1._op)


print('d1:', d1)
print('d2:', d2)
print('slope:', (d2 - d1) / h)

# https://youtu.be/VMj-3S1tku0?t=1860
