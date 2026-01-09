class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None


class DoublyLinkedList:
    
    def __init__(self):
        self.head = None
        self.tail = None
        self.size = 0
    
    def is_empty(self):
        return self.head is None
    
    def get_size(self):
      
        return self.size
    
    def insert_at_beginning(self, data):
       
        new_node = Node(data)
        
        if self.is_empty():
            self.head = self.tail = new_node
        else:
            new_node.next = self.head
            self.head.prev = new_node
            self.head = new_node
        
        self.size += 1
    
    def insert_at_end(self, data):
       
        new_node = Node(data)
        
        if self.is_empty():
            self.head = self.tail = new_node
        else:
            new_node.prev = self.tail
            self.tail.next = new_node
            self.tail = new_node
        
        self.size += 1
    
    def insert_at_position(self, data, position):
        """Insert a node at a specific position (0-indexed)"""
        if position < 0 or position > self.size:
            raise IndexError("Position out of bounds")
        
        if position == 0:
            self.insert_at_beginning(data)
            return
        
        if position == self.size:
            self.insert_at_end(data)
            return
        
        new_node = Node(data)
        current = self.head
        
        for _ in range(position - 1):
            current = current.next
        
        new_node.next = current.next
        new_node.prev = current
        current.next.prev = new_node
        current.next = new_node
        
        self.size += 1
    
    def delete_at_beginning(self):
      
        if self.is_empty():
            raise Exception("List is empty")
        
        data = self.head.data
        
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            self.head = self.head.next
            self.head.prev = None
        
        self.size -= 1
        return data
    
    def delete_at_end(self):
        """Delete the last node"""
        if self.is_empty():
            raise Exception("List is empty")
        
        data = self.tail.data
        
        if self.head == self.tail:
            self.head = self.tail = None
        else:
            self.tail = self.tail.prev
            self.tail.next = None
        
        self.size -= 1
        return data
    
    def delete_at_position(self, position):
       
        if self.is_empty():
            raise Exception("List is empty")
        
        if position < 0 or position >= self.size:
            raise IndexError("Position out of bounds")
        
        if position == 0:
            return self.delete_at_beginning()
        
        if position == self.size - 1:
            return self.delete_at_end()
        
        current = self.head
        for _ in range(position):
            current = current.next
        
        data = current.data
        current.prev.next = current.next
        current.next.prev = current.prev
        
        self.size -= 1
        return data
    
    def delete_by_value(self, value):

        if self.is_empty():
            raise Exception("List is empty")
        
        current = self.head
        
        while current:
            if current.data == value:
                if current == self.head:
                    return self.delete_at_beginning()
                elif current == self.tail:
                    return self.delete_at_end()
                else:
                    current.prev.next = current.next
                    current.next.prev = current.prev
                    self.size -= 1
                    return value
            current = current.next
        
        raise ValueError(f"Value {value} not found in list")
    
    def search(self, value):
    
        current = self.head
        position = 0
        
        while current:
            if current.data == value:
                return position
            current = current.next
            position += 1
        
        return -1
    
    def reverse(self):
      
        if self.is_empty() or self.head == self.tail:
            return
        
        current = self.head
        self.tail = self.head
        
        while current:
            temp = current.next
            current.next = current.prev
            current.prev = temp
            
            if temp is None:
                self.head = current
            
            current = temp
    
    def display_forward(self):
   
        if self.is_empty():
            print("List is empty")
            return
        
        current = self.head
        elements = []
        
        while current:
            elements.append(str(current.data))
            current = current.next
        
        print(" <-> ".join(elements))
    
    def display_backward(self):
        """Display the list from tail to head"""
        if self.is_empty():
            print("List is empty")
            return
        
        current = self.tail
        elements = []
        
        while current:
            elements.append(str(current.data))
            current = current.prev
        
        print(" <-> ".join(elements))
