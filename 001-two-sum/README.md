# Two Sum
https://leetcode.com/problems/two-sum/  

## Brute Force (152ms/17.75 %)
首先想到的就是一个双层循环遍历查找这样  
时间复杂度: 是一个双层循环, 所以为 *O(n<sup>2</sup>)*;  
空间复杂度: 只有返回的两个元素的空间开销, 即 *O(1)*

## Hash (8ms/70.61 %)
看答案是用一个hash表存储输入的数组, 这样可以加快搜索时的速度. 时间复杂度只有*O(n)*  
哈希表可以直接调用C++ STL中的 unordered_map *(map是二叉搜索树yo)*  

或者自己写一个  
