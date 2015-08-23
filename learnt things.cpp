Calculate 
power(a , nCr) % p ;
input - n , r, a , p ;
for power nCr compute nCr%etf(p) ; 
for prime etf(p) = p-1 ; 
and then using power function calculate power(a , nCr%(p-1))%p ;
check: if(a%p==0) ans= 0 ;
