25.K个一组反转链表

Java版本：
Class Soultion{
public ListNode reverseKGroup(ListNode head,int k){
	ListNode dummy = new ListNode(0);
	dummy.next = head;
	ListNode pre =dummy;
	ListNode end = dummy;

	while(end.next!=null ){
		for(int i = 0;i<k && end!=null;i++){
			end = end.next;
		}
		if(end ==null)break;
		ListNode start = pre.next;
		ListNode next = end.next;
		end.next = null;
		pre.next = reverse(start);
		start.next = next;
		pre = start;
		end = pre;
	}
	return dummy.next;
}

private ListNode reverse(ListNode head){
		ListNode pre;
		ListNode cur = head;
		while(!cur){
			ListNode tmp = cur.next;
			cur.next = pre;
			pre = cur;
			cur = tmp;
		}
		return pre;
	}
}