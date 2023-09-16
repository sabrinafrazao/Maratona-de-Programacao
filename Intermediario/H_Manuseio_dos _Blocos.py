def solve_game(N, K, blocks):
    color_blocks = [[] for _ in range(K + 1)]

    for num, color in blocks:
        color_blocks[color].append(num)

    max_seen = 0
    for color_group in color_blocks[1:]:
        if any(num < max_seen for num in color_group):
            return 'N'
        max_seen = max(max_seen, max(color_group))

    return 'Y'

# Leitura da entrada
N, K = map(int, input().split())
blocks = [list(map(int, input().split())) for _ in range(N)]

# Chama a função e imprime o resultado
result = solve_game(N, K, blocks)
print(result)
