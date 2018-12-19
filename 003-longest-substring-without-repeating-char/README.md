# Longest Substring Without Repeating Characters
https://leetcode.com/problems/longest-substring-without-repeating-characters/

## Force Brute
遍历所有子字符串, 检测其是否没有重复字符  
时间复杂度为 *O(n<sup>3</sup>)*

## Sliding Window (28 ms/49.71 %)
我首先想到的是这个滑动窗口的算法(其实当场想到的是KMP 2333, 不过KMP是个字符串匹配算法...)  

## Sliding Window Optimized
在判断时进行了改进, 大意是使用一个 **hashmap** 而不是像我上面使用一个 string...