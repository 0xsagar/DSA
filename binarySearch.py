# n = int(input("Enter the number of elements: "))
# k = int(input("Enter the key: "))
# arr = [int(x) for x in input().split()]

n = 6
k = 1
arr = [2, 3, 4, 15, 16, 25]
# print(arr, n, k)


def binarySearch(arr, n, k):
    start = 0
    end = n - 1
    mid = int(start + (end - start) / 2)
    while start <= end:
        if arr[mid] == k:
            return mid
        if arr[mid] < k:
            start = mid + 1
        else:
            end = mid - 1
        mid = int(start + (end - start) / 2)
    return -1


print(binarySearch(arr, n, k))
