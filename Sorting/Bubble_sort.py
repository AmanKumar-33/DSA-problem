# writing a code for the bubble sort algorithm
# the bubble sort algorithm is a sorting algorithm that compares two adjacent elements and swaps them if they are not in the intended order.
# swap the element inpairs such that the smallest element is at the beginning of the list.
# when reach at end of the list,start over agin.
# stop when the swap is no more needed.
# the bubble sort algorithm is not efficient for large lists.
def bubble_sort(L):
    swap = False
    while not swap:
        print('bubble sort:' + str(L))
        swap = True
        for j in range(1,len(L)):
            if L[j-1] > L[j]:
                swap = False
                temp = L[j]
                L[j] = L[j-1]
                L[j-1] = temp

testlist = [1,3,5,7,2,6,25,18,13]
bubble_sort(testlist)
print(testlist)
