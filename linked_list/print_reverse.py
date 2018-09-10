
# print reverse linked list
# https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem

def reversePrint(head):
    prev = None
    next_node = head
    current = head
    while(current):
        next_node = current.next
        current.next = prev
        prev=current
        current=next_node
    head = prev
    while(head):
        print (head.data)
        head = head.next
