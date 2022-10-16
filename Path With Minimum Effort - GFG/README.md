# Path With Minimum Effort
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are a hiker preparing for an upcoming hike. You are given&nbsp;<code>heights</code>, a 2D array of size&nbsp;<code>rows x columns</code>, where&nbsp;<code>heights[row][col]</code>&nbsp;represents the height of cell&nbsp;<code>(row, col)</code>. You are situated in the top-left cell,&nbsp;<code>(0, 0)</code>, and you hope to travel to the bottom-right cell,&nbsp;<code>(rows-1, columns-1)</code>&nbsp;(i.e.,&nbsp;<strong>0-indexed</strong>). You can move&nbsp;<strong>up</strong>,&nbsp;<strong>down</strong>,&nbsp;<strong>left</strong>, or&nbsp;<strong>right</strong>, and you wish to find a route that requires the minimum&nbsp;<strong>effort</strong>.</span></p>

<p><span style="font-size:18px">A route's&nbsp;<strong>effort</strong>&nbsp;is the&nbsp;<strong>maximum absolute difference</strong><strong>&nbsp;</strong>in heights between two consecutive cells of the route.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px">heights = [[1,2,2],[3,8,2],[5,3,5]]
Output: 2
Explaination: The route of [1,3,5,3,5] has a maximum absolute difference of 2 in consecutive cells.This is better than the route of [1,2,2,2,5], where the maximum absolute difference is 3.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>MinimumEffort()&nbsp;</strong>which takes the&nbsp;array&nbsp;<strong>height </strong><strong>&nbsp;</strong>and Returns&nbsp;the<em> </em><strong>minimum</strong>&nbsp;<strong>effort</strong>&nbsp;required to travel from the top-left cell to the bottom-right cell<em>.</em></span></p>

<p><span style="font-size:18px"><strong>Constraints</strong><br>
<code>rows == heights.length<br>
columns == heights[i].length<br>
1 &lt;= rows, columns &lt;= 100<br>
1 &lt;= heights[i][j] &lt;= 10<sup>6</sup></code></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><code><sup><strong>Expected Time Complexity:</strong> O(Elog(V))<br>
<strong>Expected Space Complexity: </strong>O(N,M)</sup></code></span></p>
</div>