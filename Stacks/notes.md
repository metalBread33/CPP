
# Stack Data Structure

## What is a Stack?

- Linear data structure which operaties in FILO
    - First in last out
- behaves like a real-world stack
- predefined capacity
- simple ds that allows adding and removing elements in a FILO order
- Items added on top (push)
- Items removed also from the top (pop)
- Ex) function call stack

## Standard Stack Operations

- push()
    - place item onto stack; if no place for new item stack is in overflow state
- pop()
    - return item at top of teh stack then remove. 
    - if pop called when empty it is in underflow state
- isEmpty()
    - tells if stack is empty or not
- isFull()
    - tells if stack is full or not
- peek(int i)
    - see the item at the i position
- count() 
    - get number of items in the stack
- change(int i)
    - change the item at the i position
- display()
    - display all items in the stack

## Stack Applications

- balancing of symbols
- infix to post/prefix conversion
- redo/undo features in editors
- forword/backward feature in web browser