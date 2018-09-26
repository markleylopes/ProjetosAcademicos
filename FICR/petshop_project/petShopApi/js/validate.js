$(document).ready(function(){
		$("#loginForm").validate({
			rules: {
				login: {
					required: true,
					email: true
				},

				password: {
					required: true,
				}
			}

		});

		$("#registerForm").validate({
			rules: {
				nome: {
					required: true,
					minlength: 2,
				},

				sobrenome: {
					required: true,
					minlength: 2,
				},

				email: {
					required: true,
					email: true,
				},

				confirmemail: {
					required: true,
					email: true,
				},

				cpf: {
					required: true,
					minlength: 11,
				},

				dataNascimento: {
					required: true,
					date: true,
				},

				rua: {
					required: true,
				},

				bairro: {
					required: true,
				},

				cidade: {
					required: true,
				},

				uf: {
					required: true,
				},

				cep: {
					required: true,
				},

				senha: {
					required: true,
					minlength: 6,
					maxlength: 24,
				},

				confirmsenha: {
					required: true,
					minlength: 6,
					maxlength: 24,
				},
			}

		});

		$("#consultaForm").validate({
			rules: {
				petescolha: {
					required: true,
				},

				dataescolha: {
					required: true,
				},

				horaescolha: {
					required: true,
				},
			}
		});

		$("#banhoForm").validate({
			rules: {
				petescolha: {
					required: true,
				},

				dataescolha: {
					required: true,
				},

				horaescolha: {
					required: true,
				},
			}
		});

		$("#tosaForm").validate({
			rules: {
				petescolha: {
					required: true,
				},

				dataescolha: {
					required: true,
				},

				horaescolha: {
					required: true,
				},
			}
		});
	});