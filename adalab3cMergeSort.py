c=0
def mergesort(l):
	global c
	if len(l)>1:
		m=len(l)//2
		l1=l[:m]
		l2=l[m:]
		mergesort(l1)
		mergesort(l2)
		i,j,k=0,0,0
		
		while i<len(l1) and j<len(l2):
			c+=1
			if l1[i]<l2[j]:
				l[k]=l1[i]
				i+=1
			else:
				l[k]=l2[j]
				j+=1
			k+=1
		while i<len(l1):
			l[k]=l1[i]
			i+=1
			k+=1
		while j<len(l2):
			l[k]=l2[j]
			j+=1
			k+=1

	#return c

print('enter the array')
arr=list(map(int,input().split(' ')))
mergesort(arr)
print(arr)
print('No. of comaprisons: ',c)

