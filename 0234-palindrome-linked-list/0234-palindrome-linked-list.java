/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ListNode temp1 = head;
        int n=0;
        while(temp1!=null){
            n++;
            temp1 = temp1.next;
        }
        int k=n/2;
        boolean flag = false;
        if(n%2!=0){
            flag=true;
        }
        ListNode temp2 = head;
        Stack<Integer> half = new Stack<>();
        
        while(temp2!=null){
            if(k>0){
                half.push(temp2.val);
                k--;
            }
            else if(flag==true){
                flag=false;
            }
            else{
                if(half.peek()==temp2.val){
                    half.pop();
                }
                else{
                    return false;
                }
            }
            temp2 = temp2.next;
        }
        return true;
    }
}