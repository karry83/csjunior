# overview
- this chapter is about the basic algorithm of hash table
- why we need to hash
- how to hash
- what is a better hash algorith
## excercise : try to find the math test result for students
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

## this is what we call direct addreessing
- what is the limitable of algorithm?
  - what if their name consist of both Uper and Lower letter and numbers, with the length of less than 15?
      - size of target set
      - size of memory need to allocate?

## One possible soltions to resovle the issue: hash table
- size of target set: U
- size of acutal set: m, m much less than U
- U-->m:
- how to resolve conflicts:
  - chaining
  - open addressing
- task1: using chaining to improve algorithm
  - requirement: find the score of any student with 1s
  - known facts
    - the result is a list with two columns: student name and their scores
    - size of list bigger than 1000,000
    - download the data in [math result]()
    - student name consist of lower english letters only, from 'a' to 'z'
    - and there are no identical names
    - the length of the student names <=15
  - input:
    - one line if string which tells the student name
  - output:
    - two line of decimals:
      -  first line:score of the student
      -  second line: time eclipsed in millimun second
  - [sample input](/test/hashtable.in)  
- [Sample solutions](/src/hashatble.cpp)

        
