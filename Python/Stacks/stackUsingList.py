stack1 = []

#push
stack1.append('Hi')
stack1.append("Hello")
stack1.append("tata")
print(stack1)

#peek
topElement = stack1[-1]
print("The  top element is :",topElement)

#pop
poppedElement = stack1.pop()
print("Popped element is :",poppedElement)

#size
print("Size is :",len(stack1))