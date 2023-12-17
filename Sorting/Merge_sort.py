# writing an code for the merge sort algorithm
# the merge sort algorithm is a divide and conquer algorithm that splits the list into two halfs and then sorts them and merge them back to one list
# if the list is empty or has one element then it is already sorted
# merge	sorted	sublists	
# 1.look at	first	element	of	each,	move	smaller	to	end	of	the	
# result	
# 2. when	one	list	empty,	just	copy	rest	of	other	list	

def merge_sort(list):
    if len(list) <=1:
        return list
    