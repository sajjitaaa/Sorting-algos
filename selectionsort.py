# Selection sort in Python


def selectSort(array, size):
   
    for step in range(size):
        min_idx = step

        for i in range(step + 1, size):
         
            if array[i] < array[min_idx]:
                min_idx = i
        (array[step], array[min_idx]) = (array[min_idx], array[step])


data = [29, 45, 70, 110, 9]
size = len(data)
selectSort(data, size)
print('Sorted Array in Ascending Order:')
print(data)