'''
  Contest 228
  C - Final Day
  Rakesh Kumar
'''

def solve():
    n, k = map(int, input().split())
    total_marks = []
    student_marks = []
    topper = 0
    for _ in range(n):
        marks = sum([int(x) for x in input().split()])
        total_marks.append(marks)
        student_marks.append(marks)
    total_marks.sort(reverse=True)
    topper = total_marks[k - 1]
    for s in student_marks:
        if s + 300 >= topper:
            print('Yes')
        else:
            print('No')

if __name__ == '__main__':
    solve()