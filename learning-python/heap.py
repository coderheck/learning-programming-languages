import heapq

print("===== CHƯƠNG TRÌNH HỌC HEAP =====\n")

# 1. MIN-HEAP
print("1. MIN-HEAP (SỐ NHỎ NHẤT ƯU TIÊN)")
a = [6, 3, 8, 1, 4]
print("Danh sách ban đầu:", a)

heapq.heapify(a)
print("Sau heapify:", a)

heapq.heappush(a, 0)
print("Sau khi thêm 0:", a)

x = heapq.heappop(a)
print("Lấy số nhỏ nhất:", x)
print("Heap còn lại:", a)

print("\n----------------------------\n")

# 2. MAX-HEAP (MÔ PHỎNG)
print("2. MAX-HEAP (SỐ LỚN NHẤT ƯU TIÊN)")
b = [6, 3, 8, 1, 4]
print("Danh sách ban đầu:", b)

max_heap = [-x for x in b]
heapq.heapify(max_heap)

print("Max-Heap (đảo dấu):", max_heap)

largest = -heapq.heappop(max_heap)
print("Lấy số lớn nhất:", largest)

print("\n----------------------------\n")

# 3. PRIORITY QUEUE
print("3. XẾP HÀNG THEO ƯU TIÊN")
pq = []
heapq.heappush(pq, (2, "Bài tập"))
heapq.heappush(pq, (1, "Bài kiểm tra"))
heapq.heappush(pq, (3, "Trò chơi"))

while pq:
    priority, task = heapq.heappop(pq)
    print(f"Ưu tiên {priority}: {task}")
    print("\n===== KẾT THÚC =====")
