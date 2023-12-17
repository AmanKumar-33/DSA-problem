# write an program for Bisection search method
# O(log(n)) bisection search calls

def bisection_search(L,e):
    if L == []:
        return False
    elif len(L) == 1:
        return L[0] == e
    else:
        half = len(L)//2
        if L[half] > e:
            return bisection_search(L[:half],e)
        else:
            return bisection_search(L[half:],e)
        
testlist = [1,2,3,4,5,6,7,8,9,10]
list = [1,3,5,2,4,6]
print(bisection_search(list,2))