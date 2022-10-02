public class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) 
    {
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        List<List<Integer>> res = new LinkedList<List<Integer>>();
        
        if(root == null) return res;
        
        queue.offer(root);
        while(!queue.isEmpty())
        {
            int levelNum = queue.size();
            List<Integer> subans = new LinkedList<Integer>();
            for(int i=0; i<levelNum; i++) 
            {
                if(queue.peek().left != null) queue.offer(queue.peek().left);
                if(queue.peek().right != null) queue.offer(queue.peek().right);
                subans.add(queue.poll().val);
            }
            res.add(subans);
        }
        return res;
    }
}