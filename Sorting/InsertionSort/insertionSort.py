# writing an code for the insertion sort 

# def insertionSort(arr):
#     n = len(arr)
#     if n <=1:
#         return 
#     for i in range(1,n):
#         key = arr[i]
#         j = i-1
#     while j > 0 and key < arr[j]:
#         arr[j+1] = arr[i]
#         j -= 1
#     #insert the key at right position
#     arr[j+1] = key

def insertionSort(lst):
    for i in range(1,len(lst)):
        for j in range(i-1,-1,-1):
            if(lst[j] > lst[j+1]):
                lst[j], lst[j+1] = lst[j+1],lst[j]



arr = [11,34,4,2,1,23]
insertionSort(arr)
print("sorted Array",arr)

