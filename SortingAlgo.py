# bubble Sort
def bubble_sort(L):
    swap = False
    while not swap:
        print('bubble sort' + str(L))
        swap = True
        for j in range(1,len(L)):
            if L[j-1] > L[j]:
                swap = False
                temp = L[j]
                L[j] = L[j-1]
                L[j-1] = temp

# testList = [1,3,5,7,2,6,25,18,13]
# print(" ")
# print(bubble_sort(testList))
# print(testList)

# Selection sort 

def Selection_sort(L):
    suffixSt = 0
    while(suffixSt != len(L)):
        print('selection sort' + str(L))
        for i in range(suffixSt,len(L)):
            if L[i] < L[suffixSt]:
                L[suffixSt], L[i] = L[i], L[suffixSt]
        suffixSt += 1
# testList = [1,3,5,7,2,6,25,18,13]
# print(" ")
# print(Selection_sort(testList))
# print(testList)


# Merge Algorithm
def Merge(left,right):
    result = []
    i ,j = 0,0
    while i < len(right) and j < len(left):
        if left[i] < right[j]:
            result.append(left[i])
            i += 1
        else:
            result.append(right[j])
            j += 1
    while (i < len(left)):
        result.append(left[i])
        i += 1

    while( j < len(right)):
        result.append(right[j])
        j += 1

    print('merge' + str(left) + '&' + str(right) + 'to' + str(right))
    return result


# Merge Sort

def Merge_sort(L):
    print('merge sort:' +str(L))
    if(len(L) < 2):
        return L[:]
    else:
        middle = len(L)//2
        left = Merge_sort(L[:middle])
        right = Merge_sort(L[middle:])      
        return Merge(left,right)
    
testList = [1,3,5,7,2,6,25,18,13]
print(" ")
print(Merge_sort(testList))




