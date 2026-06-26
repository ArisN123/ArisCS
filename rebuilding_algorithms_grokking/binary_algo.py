#import libraries

import random

#define min &  max values & value to find 

min_value = 1
max_value = 5
value_to_find = random.randint(min_value,max_value)

#create list to find value in
initial_list = []

for x in range(min_value,max_value+1):
    initial_list.append(x)


#algorithm
# def binary_search(sorted_list,value_to_find):
#         iterations = 1
#         low_value = sorted_list[0]
#         high_value = sorted_list[-1]
#         guess_value = (low_value + high_value)//2
#         while True:
#                 old_value = guess_value
#                 guess_value = (low_value + high_value)//2
#                 if guess_value > value_to_find:
#                     high_value = (guess_value - 1)
#                     iterations += 1 
#                 elif guess_value < value_to_find:
#                     low_value = (guess_value + 1)
#                     iterations += 1 
#                 elif guess_value == value_to_find:
#                     return(f'took {iterations} iterations to find item {value_to_find}')
#                 elif old_value == guess_value:
#                     return("value not in list")





# print(binary_search(initial_list, value_to_find))
# print(len(initial_list)-1)
test_list  = [5,10,25,35,47,67,499]

def binary_search(sorted_list,value_to_find):
    iterations = 0
    min_index = 0
    max_index = len(sorted_list)-1
    middle_index = max_index // 2 
    old_index = -99
    while min_index <= max_index:
        iterations += 1 
        middle_index = (min_index + max_index) // 2 
        if sorted_list[middle_index] > value_to_find:
            max_index = middle_index-1
        elif sorted_list[middle_index] < value_to_find:
            min_index = middle_index+1
        elif sorted_list[middle_index] == value_to_find:
            return(f"took {iterations} iterations to find value {value_to_find} in position {middle_index}")
    return("value not in list")
        


print(binary_search(test_list,999))


def max_iterations_binary_search(items):
    middle_value = items//2
    iterations = 1
    while True:
        if middle_value == 1:
            return(iterations)
            break
        else:
            middle_value = round(middle_value/2)
            iterations += 1

# print(max_iterations_binary_search(5))
# print(2**32)



