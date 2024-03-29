# overview
- this chapter is about the basic algorithm of b-tree
- why we need b-tree
- what is the characteristic of btree
- how to build a btree
- main usage of btree
## excercise 1: try to find the Xth min number out of one million int
- backgroud
  Molly's school recently publishe their middle term results, every students want to know their 
- known facts
  - the result is a list with two columns: student name and their scores
  - size of list bigger than 100,000
  - download the data in [math result]()
  - student name consist of lower english letters only, from 'a' to 'u'
  - and there are no identical names
  - the length of the student names <=10
-  task 1:
  - requirement:try serveral different student name for test
  - input:
    - one line if string which tells the student name
  - output:
    - two line of decimals:
      -  first line:score of the student
      -  second line: time eclipsed in millimun second
- task 2:
  -  thinking : what decide the time eclipsed? randomly?
  -  any way to improve the algorithm
- task 3:
  - requirement: find the score of any student with 1s
  - input:
    - one line if string which tells the student name
  - output:
    - two line of decimals:
      -  first line:score of the student
      -  second line: time eclipsed in millimun second

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
        
