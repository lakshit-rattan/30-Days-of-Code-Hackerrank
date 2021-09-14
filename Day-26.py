import math

T = int(input())

def isPrime(n):
  for i in range(2, int(math.sqrt(n)+1)):
    if n % i == 0:
      return False
  return True


for _ in range(T):
  n = int(input())

  if n >= 2 and isPrime(n):
    print("Prime")
  else:
    print("Not prime")
