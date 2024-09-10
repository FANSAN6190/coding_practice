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
    int gcd(int a, int b){
        if(a==0 || b==0)return a+b;
        return (a>b)?gcd(a%b,b):gcd(b%a,a);
    }
    
    public ListNode insertGreatestCommonDivisors(ListNode head) {
        ListNode temp = head;
        while(temp.next!=null){
            ListNode newNode = new ListNode(gcd(temp.val,temp.next.val),temp.next);
            temp.next = newNode;
            temp=temp.next.next;
        }
        return head;
    }
}