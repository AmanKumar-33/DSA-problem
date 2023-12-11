# more efficent code for selection sort
# O(n^2) time complexity
# O(1) space complexity
# One way to make selection sort more efficient is to use a min-max approach, where you find both the minimum and maximum elements in each iteration and swap them with the first and last positions of the unsorted part of the array. This way, you can sort the array from both ends and reduce the number of iterations by half. Here is an example of how to implement this optimization in Python:

# ```python
def min_max_selection_sort(arr):
    n = len(arr)
    for i in range(n // 2):
        # initialize the minimum and maximum indices
        min_idx = i
        max_idx = i
        # loop through the unsorted part of the array
        for j in range(i, n - i):
            # update the minimum and maximum indices if needed
            if arr[j] < arr[min_idx]:
                min_idx = j
            elif arr[j] > arr[max_idx]:
                max_idx = j
        # swap the minimum and maximum elements with the first and last positions
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        # check if the maximum element was swapped
        if max_idx == i:
            # update the maximum index to the previous minimum index
            max_idx = min_idx
        # swap the maximum element with the last position
        arr[n - i - 1], arr[max_idx] = arr[max_idx], arr[n - i - 1]
    return arr

arr = [5, 3, 1, 4, 2]
print(min_max_selection_sort(arr))

# ```

# This optimization can improve the best-case and average-case time complexity of selection sort from O(n^2) to O(n^2 / 2), but it does not change the worst-case time complexity, which is still O(n^2). You can learn more about this optimization and other ways to improve selection sort from these sources²⁶⁷⁸. I hope this helps. 😊

# Source: Conversation with Bing, 21/11/2023
# (1) A sorting algorithm that slightly improves on selection sort. https://www.geeksforgeeks.org/sorting-algorithm-slightly-improves-selection-sort/.
# (2) Selection Sort Optimization (Min-Max) | Colin.js. https://colinchjs.github.io/2023-10-01/17-44-39-824447-selection-sort-optimization-min-max/.
# (3) How to optimize selection sort in Python? - Coding Variable. https://codingvariable.com/how-to-optimize-selection-sort-in-python/.
# (4) 13. 7. Optimizing Sort Algorithms with Code Tuning. https://opendsa-server.cs.vt.edu/ODSA/Books/Everything/html/SortOpt.html.
# (5) Selection Sort – Data Structure and Algorithm Tutorials. https://www.geeksforgeeks.org/selection-sort/.
# (6) Selection Sort (With Code in Python/C++/Java/C) - Programiz. https://www.programiz.com/dsa/selection-sort.
# (7) Java Program for Selection Sort - GeeksforGeeks. https://www.geeksforgeeks.org/java-program-for-selection-sort/.
# (8) C++ Program to Implement Selection Sort - Online Tutorials Library. https://www.tutorialspoint.com/cplusplus-program-to-implement-selection-sort.