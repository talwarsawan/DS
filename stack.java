class stack{
    private int Stack[]=new int[9];
    private int top=-1;
    private int maximum=9;
    public void push(int n)
    {
        if(top<maximum-1)
            {
                top=top+1;
                Stack[top]=n;
            }
        else{
            System.out.println("Overflow");
        }
    }
    public void pop()
    {
        if(top==-1)
            {
                System.out.println("Underflow");
            
        }
        else
            {
                top=top-1;
            }
    }
    public int peek()
    {
        return Stack[top];
    }
    public int remain()
    {
        return maximum-top-1;
    }
    public void clear()
    {
        top=-1;
    }
}
class queue{
    public static void main(String[] args)
    {
        stack s1 = new stack();
        stack s2 = new stack();
        for(int i=0;i<11;i++)
            {
                s1.push(i);
            }
        for(int i=0;i<9;i++)
            {
                s2.push(s1.peek());
                s1.pop();
            }
        for(int i=0;i<9;i++)
            {
                System.out.println(s2.peek());
                s2.pop();
            }
    }
}