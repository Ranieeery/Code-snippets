public class MyThread extends Thread {
  int threadID;
  private static final int NUM_THREADS = 15;

  MyThread (int ID) {
    threadID = ID;
  }

  public void run () {
    System.out.println (threadID + ":Hello World!");
    try {
      Thread.sleep(5000);
    }
    catch (InterruptedException e) {
      e.printStackTrace();
    }
    System.out.println (threadID + ": Bye bye world!");
}

public static void main (String args[]) {
  MyThread[] t = new MyThread[NUM_THREADS];

  for (int i = 0; i < NUM_THREADS; i++) {
    t[i] = new MyThread (i);
  }
  for (int i = 0; i < NUM_THREADS; i++) {
    t[i].start ();
    }
  }
}