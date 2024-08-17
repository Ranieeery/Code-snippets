public class ThreadAPI {
    public static void main(String[] args) {
        GerarPDF gerarPDF = new GerarPDF();
        LoadingBar loadingBar = new LoadingBar(gerarPDF);

        gerarPDF.start();
        loadingBar.start();
    }
}