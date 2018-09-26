$(document).ready(function(){
// _> LOGIN
 $("#nameInput1").val(localStorage.getItem("firstName"));
   $("#lastNameInput1").val(localStorage.getItem("lastName"));
    $("#emailInput1").val(localStorage.getItem("email"));
    $("#cpfInput1").val(localStorage.getItem("cpf"));
    $("#dataNascimentoInput1").val(localStorage.getItem("dtNasc"));
 
    $(".exitButton").click(function(){
     localStorage.clear();
             window.location.replace("/");

    });
    
    function sessaoLogin(getId, getFirstName, getLastName, getEmail, getCpf, getDtNasc){
    
        localStorage.setItem("loginStatus",getId);
        localStorage.setItem("firstName",getFirstName);
        localStorage.setItem("lastName", getLastName);
        localStorage.setItem("email",getEmail);
        localStorage.setItem("cpf",getCpf);
        localStorage.setItem("dtNasc",getDtNasc);
       
            
    };
    
           var aux = 0;
     $("#submitLogin").click(function(event){
    event.preventDefault();
    $.ajax({
     type: 'POST',
     url: "/login",
     data: $('#loginForm').serialize(),
     success: function(res){
        if(aux==0){
         $("#statusLogin").append(res);
         aux++;}
         
         if(res.funcao == 1){
             sessaoLogin(res.id, res.firstName, res.lastName, res.email, res.cpf, res.dtNasc);
             window.location.replace("/clienteLogado");
         
         }  
    }
        
  });

  }); 

    
// _> CADASTRO_CLIENTE
 
  $("#submitButton").click(function(event){
    event.preventDefault();
//NOME
      var nameInput = $("#nameInput").val();
      var lastNameInput = $("#lastNameInput").val();
      
//EMAIL
      var emailInput = $("#emailInput").val();
      
//CPF DATA_NASCIMENTO SEXO
      var cpfInput = $("#cpfInput").val();
      var dataNascimentoInput = $("#dataNascimentoInput").val();
      var sexoInput = $("#sexoInput").val();
      
//ENDERECO
      var ruaInput = $("#ruaInput").val();
      var bairroInput = $("#bairroInput").val();
      var cidadeInput = $("#bairroInput").val();
      var ufInput = $("#ufInput").val();
      var cepInput = $("#cepInput").val();
//CONTATO
      var telefone1Input = $("#telefone1Input").val();
      var telefone2Input = $("#telefone2Input").val();
//SENHA
      var senhaInput = $("#senhaInput").val();
    
//ID'S  
      
    $.ajax({
     type: 'POST',
     url: "/cliente",
     data: {
        cpf: cpfInput,
        firstName: nameInput,
        lastName: lastNameInput,
        email: emailInput,
             rua: ruaInput,
             bairro: bairroInput,
             cidade: cidadeInput,
             uf: ufInput,
             cep: cepInput,
       
             telefone1: telefone1Input,
             telefone2: telefone2Input,
         dataNascimento: dataNascimentoInput,
         sexo: sexoInput,
         senha: senhaInput
     },
     success: function(res){
      alert(res);
    }
  });

  }); 

});
