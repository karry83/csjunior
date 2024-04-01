# overview
- this chapter is about the basic algorithm of binary search tree(bst for short), we may cover the following topic
  - why we need b-tree
  - what is the characteristic of btree
  - how to build a btree
  - main usage of btree
## excercise 1: try to find the Xth least number out of one million int
- backgroud
  Molly's teacher recently published their maths results
  there are 100,000 students in her school, each  student took the exam
  result in [60,100]
- input: 
    - an int, which indicated the scored to be found under
    - [math_result.in]()
      - note: score in math_result.in is not sorted
  - output:
    - number of students who score less than input number

## excercise 2: try to find the math test result for students
-  task 1:
  - find the number of students less than [input number]
  - input: 
    - an int, which indicated the score to be found under
    - [math_result.in]()
      - note: score in math_result.in is not sorted, more than 100,000
  - output:
    - number of students who score less than input number
- task 2:
  -  found the first number which is bigger than a input number
  -  input:
     -  an int, which you try to find 
  -  output:
     -  an int, which is the first nuber bigger than the input number


## using a binary search tree (bst for short)
- what is binary search tree 
  - a tree nameed root
  - for any node in root
    - node.key>=node.left.key
    - node.key<=node.right.key
- character of bst
  - search 
    - average time complexity
    - bs
- taks2 : using a bst to solve to excercise 1 

## improve  task 2
- what is the time complexity of task 2
- any chance of improvement using bst's charateristic?
  - left>->middle->right
        
