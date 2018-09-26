var express = require('express'),
  app = express(),
  port = process.env.PORT || 3000,
  mongoose = require('mongoose'),
  ListModels = require('./api/models/ListModel'), //carregando modelos
  bodyParser = require('body-parser');
  
// mongoose instance connection url connection
mongoose.Promise = global.Promise;
mongoose.connect('mongodb://localhost/PetShop'); 

app.use(bodyParser.urlencoded({ extended: true }));
app.use(bodyParser.json());

var routes = require('./api/routes/ListRoutes'); //rotas
routes(app); //register the route


app.listen(port);


console.log('PetShopApi on: ' + port);
