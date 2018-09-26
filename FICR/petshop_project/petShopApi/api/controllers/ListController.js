'use strict';


var mongoose = require('mongoose'),
Agendamento = mongoose.model('Agendamento'),
Produto = mongoose.model('Produto'),
Cliente = mongoose.model('Cliente'),
Funcionario = mongoose.model('Funcionario'),
Admin = mongoose.model('Admin');
var path = require('path');

exports.pagina_inicial = function(req, res){
	res.sendFile(path.join(__dirname + '../../../index.html'));
};

exports.pagina_cadastro_cliente = function(req, res){
	res.sendFile(path.join(__dirname + '../../../registerUS.html'));
};
exports.pagina_contato = function(req, res){
	res.sendFile(path.join(__dirname + '../../../contato.html'));
};
exports.pagina_hotel = function(req, res){
	res.sendFile(path.join(__dirname + '../../../hotelzinho.html'));
};
exports.pagina_agendamento = function(req, res){
	res.sendFile(path.join(__dirname + '../../../agendamento.html'));
};

exports.pagina_produtos = function(req, res){
	res.sendFile(path.join(__dirname + '../../../produtos.html'));
};
exports.pagina_logado_cliente = function(req, res){
	res.sendFile(path.join(__dirname + '../../../clienteLogado.html'));
};
exports.get_script = function(req, res){
	console.log('../../../js/'+req.query.script);
	res.sendFile(path.join(__dirname + '../../../js/'+req.query.script));
};

exports.get_css = function(req, res){
	console.log('../../../css/'+req.query.css);
	res.sendFile(path.join(__dirname + '../../../css/'+req.query.css));
};

exports.get_imgs = function(req, res){
	console.log('../../../imgs/'+req.query.imgs);
	res.sendFile(path.join(__dirname + '../../../imgs/'+req.query.imgs));
};

exports.create_admin = function(req, res) {
	var new_admin = new Admin(req.body);
	new_admin.save(function(err, rback) {
		if (err)
			res.end("não cadastrado");
   // res.json(rback);
   res.end("cadastrado");
});
};


exports.create_funcionario = function(req, res) {
	var new_funcionario = new Funcionario(req.body);
	new_funcionario.save(function(err, rback) {
		if (err)
			res.end("não cadastrado");
   // res.json(rback);
   res.end("cadastrado");
});
};

exports.create_cliente = function(req, res) {
	
	Cliente.findOne({"cpf": req.body.cpf}, function(err, rback) {
		if (err)
			res.send(err);
		
		if(rback == null){
			
			Cliente.findOne({"email": req.body.email}, function(err, rback) {
				if (err)
					res.send(err);
				
				if(rback == null){
					
					var new_cliente = new Cliente(req.body);
					new_cliente.save(function(err, rback) {
						if (err)
							res.send(err);

							res.send("Cadastrado");
					});
				}
				else{
					res.send("Email já cadastrado!")
				}
			});
			
		}
		else {
			res.send("Usuário já cadastrado");
		}
	});
	
};

exports.create_agendamento = function(req, res) {
	var new_agendamento = new Agendamento(req.body);
	new_agendamento.save(function(err, rback) {
		if (err)
			res.end("não cadastrado");
   // res.json(rback);
   res.end("cadastrado");
});
};

exports.create_produto = function(req, res) {
	var new_produto = new Produto(req.body);
	new_agendamento.save(function(err, rback) {
		if (err)
			res.end("não cadastrado");
   // res.json(rback);
   res.end("cadastrado");
});
};

exports.create_produto = function(req, res) {
	var new_produto = new Produto(req.body);
	new_agendamento.save(function(err, rback) {
		if (err)
			res.end("não cadastrado");
   // res.json(rback);
   res.end("cadastrado");
});
};
//GET Informações
exports.get_admin = function(req, res) {
Admin.find({/*name: req.query.name*/}, function(err, rback) {
	if (err)
		res.send(err);
	res.json(rback);
	console.log(req.params.name);
	console.log(req.query.name);
});
};

exports.get_funcionario = function(req, res) {
Funcionario.find({/*name: req.query.name*/}, function(err, rback) {
	if (err)
		res.send(err);
	res.json(rback);
	console.log(req.params.name);
	console.log(req.query.name);
});
};

exports.get_cliente = function(req, res) {
Cliente.find({/*name: req.query.name*/}, function(err, rback) {
	if (err)
		res.send(err);
	res.json(rback);
	console.log(req.params.name);
	console.log(req.query.name);
});
};

exports.get_agendamento = function(req, res) {
Agendamento.find({/*name: req.query.name*/}, function(err, rback) {
	if (err)
		res.send(err);
	res.json(rback);
	console.log(req.params.name);
	console.log(req.query.name);
});
};

exports.get_produto = function(req, res) {
Produto.find({/*name: req.query.name*/}, function(err, rback) {
	if (err)
		res.send(err);
	res.json(rback);
	console.log(req.params.name);
	console.log(req.query.name);
});
};

exports.confirm_login = function(req, res) {
	
	Cliente.findOne({"email": req.body.login, "senha": req.body.password}, function(err, rback) {
		if (err)
			res.send(err);

		if(rback==null){
			res.send("Senha ou usuário incorreto!");
		}else if(req.body.login == rback.email && req.body.password == rback.senha){
			
			res.json({
				funcao:"1",id: rback._id, 
				firstName: rback.firstName,
				lastName: rback.lastName,
				email: rback.email,
				cpf: rback.cpf,
				dtNasc: rback.dataNascimento
			});
		}
		else{
			res.send("OCORREU UM ERRO, CONTATE A EMPRESA");
		}
	});

};


exports.load_login = function(req, res) {
	
	Cliente.findOne({"_id": req.body.id}, function(err, rback) {
		if (err)
			res.send(err);

		res.json(rback);	
	});

};
