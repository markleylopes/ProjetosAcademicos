
'use strict';
module.exports = function(app) {
  var funcaoList = require('../controllers/ListController');

  // funcaoList Routes
    
    //Navegação na Página
  app.route('/')
  .get(funcaoList.pagina_inicial);
    
  app.route('/cadastro')
  .get(funcaoList.pagina_cadastro_cliente);
    
      app.route('/contato')
  .get(funcaoList.pagina_contato);
    
      app.route('/hotel')
  .get(funcaoList.pagina_hotel);
    
      app.route('/agendamento')
  .get(funcaoList.pagina_agendamento);
    
      app.route('/produtos')
  .get(funcaoList.pagina_produtos);
    
   app.route('/clienteLogado')
  .get(funcaoList.pagina_logado_cliente);

  app.route('/script')
  .get(funcaoList.get_script);
    
  app.route('/css')
  .get(funcaoList.get_css);
    
  app.route('/imgs')
  .get(funcaoList.get_imgs);

  app.route('/admin')
  .post(funcaoList.create_admin)
  .get(funcaoList.get_admin);

  app.route('/funcionario')
  .post(funcaoList.create_funcionario)
  .get(funcaoList.get_funcionario);

  app.route('/cliente')
  .post(funcaoList.create_cliente)
  .get(funcaoList.get_cliente);

  app.route('/agendamento')
  .post(funcaoList.create_agendamento)
  .get(funcaoList.get_agendamento);

  app.route('/produtos')
  .post(funcaoList.create_produto)
  .get(funcaoList.get_produto);

  app.route('/login')
  .post(funcaoList.confirm_login);
    
    app.route('/loginLoad')
  .post(funcaoList.load_login);

};
