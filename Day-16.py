    def insert(self,head,data): 
        temp = Node(data)
        if head is None:
            head = temp
            return head
        current = head
        while current.next is not None:
            current = current.next
        current.next = temp
        return head       
