def divide(A, B):
	if A%3==0:
		a = int(A/3)
	else:
		a = int(A/3)+1
	sum1 = a*B
	A = A-a
	
	if (A%2 == 0) and (B%2 == 1):
		a = A/2;
		sum2 = a*B
	elif (A%2 == 1) and (B%2 == 0):
		b = B/2;
		sum2 = A*b
	else:
		if(A>B):
			a = int(A/2);
			sum2 = a*B
		else:
			b = int(B/2)
			sum2 = A*b

	return abs(sum1-sum2)

if __name__ == '__main__':
	H, W = map(int, input().split())

	if (H+W)%2 == 1:
		if H%2 == 1:
			S = divide(H, W)
		else:
			S = divide(W, H)
	else:
		h = H%3
		w = W%3
		if h<w:
			S = divide(H, W)
		else:
			S = divide(W, H)

	print(S)
