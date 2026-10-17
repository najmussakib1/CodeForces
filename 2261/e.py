import sys
from bisect import bisect_left


dat=sys.stdin.read().split()
t=int(dat[0])
idx=1
out=[ ]
for _ in range(t ):
    n =int(dat[idx]); k=int(dat[idx+1 ] ); mor=dat[idx+2 ]
    idx+=3
    N=n//2
    P=[0]* (n+2 )
    acc=[0] *(n+2 )
    d=0
    ans=0
    for ch in mor:
        if ch=='(':
            d+=1
            P[d]=P[ d-1]+acc[d-1]
            acc[d]=0
            s=bisect_left(P,P[d]-k,1,d+1 )
            if d-s+1>ans:
                ans=d-s+1



            if P[d]<=k:
                v=d+min(k,N-d )
                if v>ans:
                    ans=v
        else:
            acc[d-1]+=1+acc[ d]
            d-=1
    out.append(ans)
print("\n".join(map(str, out)))
