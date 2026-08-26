class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        cols = [set() for _ in range (9)]
        rows = [set() for _ in range (9)]
        squares = [set() for _ in range (9)]

        for i in range (9):
            for j in range(9):

                if not board[i][j].isdigit():
                    continue

                number =  int(board[i][j])
 
                index_square = (i // 3) * 3 + j // 3

                if number in cols[j]:
                    return False
                else:
                    cols[j].add(number)

                if number in rows[i]:
                    return False
                else:
                    rows[i].add(number)

                if number in squares[index_square]:
                    return False
                else:
                    squares[index_square].add(number)
                
        return True

        