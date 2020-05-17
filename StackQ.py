class Stack(object):
    def __init__(self):
        self.queue1 = []
        self.queue2 = []
        self.curr_top = 0

    def push(self, x):
        self.queue2.append(x)
        self.curr_top = x
        while len(self.queue1):
            self.queue2.append(self.queue1.pop(0))
        temp = self.queue2
        self.queue2 = self.queue1
        self.queue1 = temp

    def pop(self):
        self.queue1.pop(0)
        if len(self.queue1):
            self.curr_top = self.queue1[0]

    def top(self):
        if self.empty() is False:
            return self.curr_top

    def empty(self):
        return len(self.queue1) == 0

