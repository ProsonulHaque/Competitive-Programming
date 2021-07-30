public class Semaphore
{
    /**
     * The current value of this semaphore.
     */

    private int value;

    /**
     * The number of threads waiting on this semaphore.
     */

    private int waiting;
    
    /**
     * A message to display when a thread sleeps on this semaphore
     * (for debugging).
     */

    private String message;

    public Semaphore(int val, String mess)
    {
	value = val;
	waiting = 0;
	message = mess;
    }

    public synchronized void down() 
    
    // Here synchronized is used to make down function atomic. 
    //So, CPU do not switch while this function is running 
    {
	if (value > 0)
	    {
		value--;
	    }
	else
	    {
		try
		    {
			waiting++;
			if (message != null)
			    System.err.println(message);
			wait();
		    }
		catch (InterruptedException e)
		    {
		    }
	    }
    }

    public synchronized void up()
    {
	if (waiting > 0)
	    {
		notify();
		waiting--;
	    }
	else
	    {
		value++;
	    }
    }
}
