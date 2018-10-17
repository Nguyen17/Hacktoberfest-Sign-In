def GCD():
	n,m = eval(input("Please enter two numbers seperated by commas: "))
	while n%m !=0:
		n,m = m,n%m
	print('GCD is',m)
