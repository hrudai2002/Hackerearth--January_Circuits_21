import math
t = int(input())
 
while(t):
    n = int(input())
    (ans,f) = (1,0)
    for i in range(2,n + 1):
        ans = (ans*i) // (math.gcd(ans,i))
    for i in range(1,n + 1):
        f += math.gcd(i,ans)
 
    print(f,ans)
    t -= 1