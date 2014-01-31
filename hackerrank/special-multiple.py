#To find the least positive integer X made up of only 9’s and 0’s such that X is a multiple of N where N is given integer.

for i in xrange(input()):
	N=int(raw_input())
	z=1
	while True:	
		num=int(bin(z)[2:].replace('1','9'))
		if num%N ==0:
			print num
			break
		else:
			z=z+1