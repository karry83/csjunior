# 倍增算法
## 最近共同祖先 LCA算法
- [知识普及](https://oi-wiki.org/graph/lca/)

- 朴素算法实现
  - 算法依赖
    - 深度优先 DFS
    - 广度优化 BFS
    - lg2(n)
      - 用位移算法的约束条件是什么？
      - 样例算法中的lg2(n) vs 数学意义上的lg2(n)
- 倍增算法实现
- [解释最好的算法](https://shawnliang.wiki/post/lca-binary-lifting/)
  - 为什么u的所有祖先都可以根据ancestors数组多次跳转得到
  - ancestor[i][j]=ancestor[ancestor[i][j-1]][j-1]
- 思考
  - Q1: 倍增算法与 二分法的异同？

