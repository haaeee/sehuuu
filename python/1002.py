import math

# 테스트 케이스 개수 입력
T = int(input())

# 각 테스트 케이스 처리
for _ in range(T):
    # 원 2개의 중심 좌표와 반지름 입력
    x1, y1, r1, x2, y2, r2 = map(int, input().split())
    
    # 두 원의 중심 사이 거리 계산
    distance = math.hypot(x2 - x1, y2 - y1)

    # 두 원의 중심이 같고 반지름도 같으면 무한개
    if distance == 0 and r1 == r2:
        print(-1)
    # 한 점에서 만남 (내접 또는 외접)
    elif distance == abs(r1 - r2) or distance == (r1 + r2):
        print(1)
    # 두 점에서 만남
    elif abs(r1 - r2) < distance < (r1 + r2):
        print(2)
    # 전혀 만나지 않음
    else:
        print(0)
