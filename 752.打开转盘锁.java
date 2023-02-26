import java.util.HashSet;

/*
 * @lc app=leetcode.cn id=752 lang=java
 *
 * [752] 打开转盘锁
 */

// @lc code=start

class Solution {
    String plusOne(String s, int j) {
        char[] ch = s.toCharArray();
        if (ch[j] == '9')
            ch[j] = '0';
        else
            ch[j] += 1;
        return new String(ch);
    }

    String minusOne(String s, int j) {
        char[] ch = s.toCharArray();
        if (ch[j] == '0')
            ch[j] = '9';
        else
            ch[j] -= 1;
        return new String(ch);
    }

    /* 双向版 */
    int openLock(String[] deadends, String target) {
        Set<String> deads = new HashSet<>();
        for (String s : deadends)
            deads.add(s);
        // 用集合不用队列，可以快速判断元素是否存在
        Set<String> q1 = new HashSet<>();
        Set<String> q2 = new HashSet<>();
        Set<String> visited = new HashSet<>();

        int step = 0;
        q1.add("0000");
        q2.add(target);

        while (!q1.isEmpty() && !q2.isEmpty()) {
            // 优化，选取元素数少的几何，占用的空间增长速度就会慢一些，效率就会高一些
            if (q1.size() > q2.size()) {
                // 交换 q1 和 q2
                temp = q1;
                q1 = q2;
                q2 = temp;
            }
            // 哈希集合在遍历的过程中不能修改，用 temp 存储扩散结果
            Set<String> temp = new HashSet<>();

            /* 将 q1 中的所有节点向周围扩散 */
            for (String cur : q1) {
                /* 判断是否到达终点 */
                if (deads.contains(cur))
                    continue;
                if (q2.contains(cur))
                    return step;

                visited.add(cur);

                /* 将一个节点的未遍历相邻节点加入集合 */
                for (int j = 0; j < 4; j++) {
                    String up = plusOne(cur, j);
                    if (!visited.contains(up))
                        temp.add(up);
                    String down = minusOne(cur, j);
                    if (!visited.contains(down))
                        temp.add(down);
                }
            }
            /* 在这里增加步数 */
            step++;
            // temp 相当于 q1
            // 这里交换 q1 q2，下一轮 while 就是扩散 q2
            q1 = q2;
            q2 = temp;
        }
        return -1;
    }
    /* 单向版本 */
    // public int openLock(String[] deadends, String target) {
    // Set<String> visited = new HashSet<>();
    // for (String s : deadends)
    // visited.add(s);
    // Queue<String> q = new Linklist<>();

    // int step = 0;
    // q.offer("0000");
    // visited.offer("0000");

    // while (!q.isEmpty()) {
    // int sz = q.size();

    // for (int i = 0; i < sz; i++) {
    // String cur = q.poll();

    // /* 判断是否到终点 */
    // if (visited.contains(cur))
    // continue;

    // if (cur.equals(target))
    // return step;

    // for (int j = 0; j < 4; j++) {
    // String up = plusOne(cur, j);
    // if (!visited.contains(up)) {
    // q.offer(up);
    // visited.add(up);
    // }

    // /* 同时还要加入往下播的可能,(广度优先的特点！) */
    // String down = minusOne(cur, j);
    // if (!visited.contains(down)) {
    // q.offer(down);
    // visited.add(up);
    // }
    // }
    // step++;
    // }
    // }
    // return -1;
    // }
    // List<String> q = new Linklist<>();
    // for (i=0; i<4;i++) {
    // q[i] = '0';
    // }
    // int step = 0;

    // while(!q.isEmpty()) {
    // for (i = 0, i< 4; i++):
    // for (j=0;j< 10;j++):
    // if checkdeadends(q):
    // contintue;
    // if checktarget(q):
    // return step;
    // q[i]=j;
    // checkdeadends(q, deadends);

    // }
    // while()

}
// @lc code=end
