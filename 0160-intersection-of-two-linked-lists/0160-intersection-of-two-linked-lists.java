/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        Set<ListNode> lis = new HashSet<>();
        while(headA!=null){
            lis.add(headA);
            headA=headA.next;
        }
        while(headB!=null){
            if(lis.contains(headB)){
                return headB;
            }
            headB=headB.next;
        }
        return null;
    }
}