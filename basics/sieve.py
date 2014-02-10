#Sieve of Eratosthenes
import math

limit = 100

prime=[True] * limit
prime[0]=prime[1] =False

for i in xrange(2,int(math.sqrt(limit))):
	if prime[i]:
		for j in xrange(i*i,limit,i):
			prime[j]=False

for index,val in enumerate(prime):
	if val==True:
		print index

