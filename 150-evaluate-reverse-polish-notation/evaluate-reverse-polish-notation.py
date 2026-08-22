class Solution:

    def isOperator(self, s):
        return s=="+" or s == "-" or s=="/" or s=="*"

    def evalRPN(self, tokens: List[str]) -> int:
        numbers = []
        for token in tokens:
            if not self.isOperator(token):
                numbers.append(token)
            else:
                e2 = int(numbers.pop())
                e1 = int(numbers.pop())
                
                res = 0
                if token == "+":
                    res = e1 + e2
                if token == "-":
                    res = e1 - e2
                if token == "*":
                    res = e1 * e2
                if token == "/":
                    res = e1 / e2
                
                numbers.append(res)
        return  math.ceil(int(numbers[-1]))



