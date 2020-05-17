class Queue(object):
    def __init__(self):
        self.stack1 = []
        self.stack2 = []


    def push(self, x):
        self.stack1.append(x)

    def pop(self):
        if len(self.stack2) == 0:
            while len(self.stack1):
                curr = self.stack1.pop()
                self.stack2.append(curr)
        self.stack2.pop()


    def peek(self):
        if len(self.stack2) == 0:
            while len(self.stack1):
                curr = self.stack1.pop()
                self.stack2.append(curr)
        return self.stack2[-1]

    def empty(self):
        return len(self.stack1) + len(self.stack2) == 0