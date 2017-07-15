if __name__ == '__main__':
	A, B, C = map(int, input().split())
	if(A<=C):
		if(C<=B):
			print('Yes')
		else:
			print('No')
	else:
		print('No')