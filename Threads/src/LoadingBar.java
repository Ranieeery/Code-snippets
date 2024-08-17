public class LoadingBar extends Thread {
    private Thread initPDF;

    public LoadingBar(Thread initPDF) {
        this.initPDF = initPDF;
    }

    @Override
    public void run() {
        while (true) {
            try {
                Thread.sleep(250);

                if (!initPDF.isAlive()) {
                    break;
                }
                System.out.print(":");
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}