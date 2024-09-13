# overview
- this chapter is about the basic algorithm of hash table
- why we need to hash
- how to hash
- what is a better hash algorith
## excercise : try to find the math test result for students
- backgroud
  Molly's teacher recently published their maths results
  there are 100,000 students in her school, each  student took the exam
  result in [60,100]
-  task 1:
  - find the number of students less than [input number]
  - input: 
    - an int, which indicated the scored to be found under
    - [math_result.in]()
      - note: score in math_result.in is not sorted
  - output:
    - number of students who score less than input number
- task 2:
  -  found the first number which is bigger than a input number
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
  - [sample input](../test/hashtable.in)  
- [Sample solutions](../src/hashatble.cpp)

        
