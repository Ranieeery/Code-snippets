# Raw Java Web Server

This is a simple example of a raw Java web server implementation using the `com.sun.net.httpserver` package.

## Prerequisites

Before running the web server, make sure you have the following:

- Java Development Kit (JDK) installed on your machine.
- Basic understanding of Java programming language.

## Getting Started

1. Clone or download the repository to your local machine.
2. Open the `JavaServer.java` file in your preferred Java IDE.
3. Modify the `port` and `host` variables according to your desired configuration.
4. Customize the `response` variable to display the desired HTML content.
5. Run the `JavaServer` class to start the web server.
6. Access the server by navigating to `http://localhost:8080/` in your web browser.

## Explanation

The `JavaServer` class sets up a basic HTTP server using the `HttpServer` class from the `com.sun.net.httpserver` package. It listens on the specified `port` and `host` and handles incoming requests.

The `handle` method is responsible for processing each request. It sets the response headers, sends the response body, and closes the output stream.
