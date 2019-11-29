def lcs():
    for i in range(l1+1):
        for j in range(l2+1):
            if i==0 or j==0:
                mat[i][j]=0
            elif s1[i-1]==s2[j-1]:
                mat[i][j]=mat[i-1][j-1]+1
            else:
                mat[i][j]=max(mat[i-1][j],mat[i][j-1])

    return (mat[l1][l2])

if __name__=='__main__':
    s1=input()
    l1=len(s1)
    s2=input()
    l2=len(s2)
    mat=[[0 for i in range(l2+1)] for j in range(l1+1)]
    print(max(l1,l2)-lcs())
 
