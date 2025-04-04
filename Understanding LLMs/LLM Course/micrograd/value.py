
class Value:
    
    def __init__(self,data, _childern=(), _op=''):
        self.data = data
        self._prev = set(_childern)
        self._op = _op
    
    def __repr__(self):
        return f"Value(data={self.data})"
    
    def __add__(self,other):
        out = Value(self.data + other.data, (self, other),'+')    
        return out
    
    def __mul__(self,other):
        out = Value(self.data * other.data, (self, other), '*') 
        return out
    
    #def 


a= Value(2.0)
b = Value(-3.0)
c = Value(10.0)
d = a * b + c

print(d)       #  Value(data=4.0)




