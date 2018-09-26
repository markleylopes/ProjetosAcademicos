    'use strict';
    var mongoose = require('mongoose');
    var Schema = mongoose.Schema;


    // AGENDAMENTO

    var AgendamentoSchema = new Schema({
        idAgendamento: String,
        idServico: String,
        idFuncionario: String,
        idDependente:  String,
        dataAgendamento: String,
        horaAgendamento: String,
        especialidadeVet: String,
        especialidadeTosador: String,
        statusAgendamento: Boolean,
        idSessao: String,
        Created_date: {
            type: Date,
            default: Date.now
        }

    });

    module.exports = mongoose.model('Agendamento', AgendamentoSchema); 

    //PRODUTOS

    var ProdutoSchema = new Schema({
        idProduto: String, // primeiro digito para tipo
        nomeProduto: String,
        descricaoProduto: String,
        preco: String,
        estoque: String,
        marca: String,
        Created_date: {
            type: Date,
            default: Date.now
        }

    });

    module.exports = mongoose.model('Produto', ProdutoSchema); 

    //CLIENTE

    var ClienteSchema = new Schema({
        //idDependente: String,
        cpf: String,
        //cnpj: String,
        //idCliente: String,
        firstName: String,
        lastName: String,
        //rg: String,
        email: String,
        rua: String,  
        bairro: String,
        cidade:String,
        uf: String,
        cep: String,
        telefone1: String,
        telefone2: String,
        dataNascimento: String,
        sexo: String,
        senha: String,
        Created_date: {
            type: Date,
            default: Date.now
        }
    });

    module.exports = mongoose.model('Cliente', ClienteSchema); 

    //FUNCIONARIOS

    var FuncionarioSchema = new Schema({
        idFuncionario: String, // o primeiro digito se refere ao tipo de Funcionario
        tipoFuncionario: String,
        nome: String,
        rg: String,
        cpf: String,
        email: String,
        endereco: String,
        telefone1: String,
        telefone2: String,
        carteiraTrabalho: String,
        username: String,
        senha: String,
        dataAdmissao: String,
        salario: String,
        dataNascimento: String,
        Created_date: {
            type: Date,
            default: Date.now
        }

    });

    module.exports = mongoose.model('Funcionario', FuncionarioSchema); 


    //ADM

    var AdminSchema = new Schema({
        idAdmin: String, // o primeiro digito se refere ao tipo de Funcionario
        nome: String,
        cpf: String,
        Created_date: {
            type: Date,
            default: Date.now
        }

    });

    module.exports = mongoose.model('Admin', AdminSchema); 
