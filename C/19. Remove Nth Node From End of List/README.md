# 19. Remove Nth Node From End of List

- Solution1
    - 先計算出node的數量，就可以知道由正向去找要刪掉哪一個node了
    - 需要跑整個link list 2次
- Solution2
    - 用兩個指標，先讓第一個跑n步，接著兩個一起跑，當第一個到底的時候，第二個所指的就是要移除的node了。
    - 只需要跑整個link list 1次
###### tags: `README.md`

@copyright @Jasonkc
