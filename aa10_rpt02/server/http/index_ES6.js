// http server : index.js 

var http = require('http');
port = 3000;

var server = http.createServer ((request, response) => {
  response.writeHeader(200, {
    "Content-Type": "text/plain"
  });
  response.write("Hello HTTP server from node.js"); // WEB response
  response.write("\nMy ID is aa10.");
  response.end();

});

server.listen(port);
console.log("Server Running on " + port + 
	".\nLaunch http://localhost:" + port);
