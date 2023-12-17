# writing an code for the selection sort algorithm
# the selection sort algorithm is an algorithm that sorts a list by finding the smallest element in the list and swapping it with the first element in the list.
# extract the minimum element from the list and swap it with the first element of the list.repeat this process for the remainder of the list.



def selection_sort(L):
    suffixSt =0
    while suffixSt != len(L):
        for i in range(suffixSt,len(L)):
            if L[i] < L[suffixSt]:
                # swap the position of the minimum element with the first element
                L[suffixSt],L[i] = L[i],L[suffixSt]
        suffixSt += 1

testlist = [2,5,7,1,8,4,0,9,3]
selection_sort(testlist)
print(testlist)

# outer loop execution L(n) times
# inner loop execution L(n-1) times
# complexity of selection sort is (n^2) where n is the len(L)
