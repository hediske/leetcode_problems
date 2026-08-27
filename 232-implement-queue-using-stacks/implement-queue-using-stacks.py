class MyQueue:

    def __init__(self):
        self.list_ = []
        self.list_temp = []
        

    def push(self, x: int) -> None:
        while self.list_:
            elem = self.list_.pop()
            self.list_temp.append(elem)
        
        self.list_.append(x)
        while self.list_temp:
            elem = self.list_temp.pop()
            self.list_.append(elem)


        

    def pop(self) -> int:
        return self.list_.pop()
        

    def peek(self) -> int:
        return self.list_[-1]
        

    def empty(self) -> bool:
        return len(self.list_) == 0      


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()