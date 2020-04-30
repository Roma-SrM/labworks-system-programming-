N = [-10, -5, 1, 2, 3, 4, 5]
def sum_of_negative(array: list):
    sum = 0
    for num in array:
        if num <0:
            sum = sum + num
    return sum
print(sum_of_negative(N))
