class Solution:
    def validTicTacToe(self, board: List[str]) -> bool:
        grid = [list(s) for s in board]

        freq = {"X": 0, "O": 0}

        cols = [{"X": 0, "O": 0} for _ in range(3)]
        rows = [{"X": 0, "O": 0} for _ in range(3)]

        diag = {"X": 0, "O": 0}
        inv_diag = {"X": 0, "O": 0}

        winning = {"X": False, "O": False}

        for i in range (3):
            for j in range(3):
                elem = grid[i][j]

                if elem == ' ':
                    continue

                freq[elem] += 1
                rows[i][elem] +=1  
                if rows[i][elem] == 3:
                    winning[elem] = True                  
                cols[j][elem] +=1
                if cols[j][elem] == 3:
                    winning[elem] = True                  
                if i == j:
                    diag[elem] +=1
                    if diag[elem] == 3:
                        winning[elem] = True                  
                if i+j == 2:
                    inv_diag[elem] +=1
                    if inv_diag[elem] == 3:
                        winning[elem] = True  
            
        if freq['X'] < freq['O'] or freq['X'] > freq['O'] + 1:
            return False

        print(cols)

        if winning['X'] and winning['O']:
            return False


        if winning ['X'] and freq['X'] != freq['O'] +1:
            return False

        if winning ['O'] and freq['X'] != freq['O']:
            return False
        
        return True


