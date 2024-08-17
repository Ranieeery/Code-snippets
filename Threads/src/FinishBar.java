public class FinishBar extends Thread {
    @Override
    public void run() {
        super.run();

        try {
            Thread.sleep(3000);
            System.out.println("Finished. Thread name: " + this.getName());
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}

class FinishBarTest extends Thread {
    @Override
    public void run() {
        super.run();

        try {
            Thread.sleep(1000);
            System.out.println("Finished. Thread test name: " + this.getName());
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }
}
