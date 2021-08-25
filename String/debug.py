class ppp:
  def __init__(self, n):
    self.n = n
    self.i = 0
    self.pali = [0]*n
    self.ps = [0]*n
 
  def add(self, val):
    self.pali[self.i] = val
    self.ps[self.i] = val
    if self.i != 0:
      self.ps[self.i] += self.ps[self.i-1]
    self.i = self.i+1
 
  def isFull(self):
    return self.i == self.n
 
  def gPR(self, L, R):
    return self.ps[R]-self.ps[L]
 
  def gfP(self, index):
    return self.pali[index]
 
 
 
def coP(inp):
  n = inp
  palin = inp
  n = n//10
  while n > 0:
    palin = palin*10+(n%10)
    n = n//10
  return palin;
 
 

 
def solve(L, R, pAPsE):
    power = pAPsE.gPR(L-1, R-1);
    base = pAPsE.gfP(L-1);
    return pow(base, power, 1000000007);
 
pAPsE = ppp(100001)
generatePalindromes(pAPsE)
q = int(input())
while q > 0:
    q = q-1
    line = input().split(" ")
    L, R = int(line[0]), int(line[1])
    print(solve(L, R, pAPsE))