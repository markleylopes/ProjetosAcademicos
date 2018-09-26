$(document).ready(function(){

	/* ---- CLICK MAP ----- */

	$('#loginButton').on("click", function(){
		$("#loginBox").toggleClass("after");
	});

	$('#squareClick').on("click", function(){
		$("#squareAnimate").toggleClass("after");
		$("#outerColor").toggleClass("after");
		$(".back").toggleClass("after");
		$(".back2").toggleClass("after");
		$("#mapBackground").toggleClass("after");

	});

	/* ---- LOGIN INPUTS ----- */

	$('#loginInput').on("focus", function(){
		$("#loginInput").addClass("after");
	});
	$('#loginInput').on("blur", function(){
		$("#loginInput").removeClass("after");
	});

	$('#passwordInput').on("focus", function(){
		$("#passwordInput").addClass("after");
	});
	$('#passwordInput').on("blur", function(){
		$("#passwordInput").removeClass("after");
	});

	/* ---- SEARCH ANIMATION ----- */

	$('#searchHeader').on("focus", function(){
		$("#searchHeader").addClass("after");
	});
	$('#searchHeader').on("blur", function(){
		$("#searchHeader").removeClass("after");
	});

	/* ---- SLIDE ANIMATION REFRESH ----- */

	$('.owl-stage-outer').attr('id', 'owlStageOuter');
	$('.owl-stage').attr('id', 'owlStage');


	if($('.owl-item').hasClass('active')){
		$('#textSection').addClass("slide_01_textSection_animate");
		$('#dogBackground').addClass("slide_01_dogBackground_animate");		
	}

	/* ---- ABOUT US SCROLL FADE ----- */

	window.onscroll = function(){
		var top = window.pageYOffset || document.documentElement.scrollTop
		if( top > 120 ) {
			$("#acessButton2").addClass("after");
			$("#leftBox").addClass("after");
			$("#imageAboutUs").addClass("after");
			$("#aboutUsTitle").addClass("after");
			$("#aboutLine").addClass("after");

		}
	}

	/* ---- PRODUCTS HOVER ----- */

	$("#articleRacoes a").hover(function(){
    	$("#racoesAnimate").addClass("after");
    }, function(){
    	$("#racoesAnimate").removeClass("after");
    });

    $("#articleOssinhos a").hover(function(){
    	$("#ossinhosAnimate").addClass("after");
    }, function(){
    	$("#ossinhosAnimate").removeClass("after");
    });

    $("#articleAcessorios a").hover(function(){
    	$("#acessoriosAnimate").addClass("after");
    }, function(){
    	$("#acessoriosAnimate").removeClass("after");
    });

    $("#articleBrinquedos a").hover(function(){
    	$("#brinquedosAnimate").addClass("after");
    }, function(){
    	$("#brinquedosAnimate").removeClass("after");
    });

    $("#articleCamas a").hover(function(){
    	$("#camasAnimate").addClass("after");
    }, function(){
    	$("#camasAnimate").removeClass("after");
    });

    $("#articleAcessoriosAlimentacao a").hover(function(){
    	$("#acessoriosAlimentacaoAnimate").addClass("after");
    }, function(){
    	$("#acessoriosAlimentacaoAnimate").removeClass("after");
    });

    $("#articleSaude a").hover(function(){
    	$("#saudeAnimate").addClass("after");
    }, function(){
    	$("#saudeAnimate").removeClass("after");
    });

    $("#articleHotelzinho a").hover(function(){
    	$("#hotelzinhoAnimate").addClass("after");
    }, function(){
    	$("#hotelzinhoAnimate").removeClass("after");
    });

    $("#articleAmbiente a").hover(function(){
    	$("#ambienteAnimate").addClass("after");
    }, function(){
    	$("#ambienteAnimate").removeClass("after");
    });

    $("#articleViagem a").hover(function(){
    	$("#viagemAnimate").addClass("after");
    }, function(){
    	$("#viagemAnimate").removeClass("after");
    });

        /* ---- AGENDAMENTO CLICK ----- */

        /* ---- CONSULTA ----- */
        $('#agendamentoConsulta').on("click", function(){
        	$("#agendamentoConsulta").toggleClass("consultaSwitch");
        	$("#afterSwitchConsultaBox").toggleClass("consultaSwitch");
        	$("#agendamentoBanho").toggleClass("consultaSwitch");
        	$("#agendamentoTosa").toggleClass("consultaSwitch");
        	$("#consultaForm").toggleClass("consultaSwitch");
        });

        /* ---- BANHO ----- */
        $('#agendamentoBanho').on("click", function(){
        	$("#agendamentoConsulta").toggleClass("banhoSwitch");
        	$("#afterSwitchBanhoBox").toggleClass("banhoSwitch");
        	$("#agendamentoBanho").toggleClass("banhoSwitch");
        	$("#agendamentoTosa").toggleClass("banhoSwitch");
        	$("#banhoForm").toggleClass("banhoSwitch");
        });

        /* ---- BANHO ----- */
        $('#agendamentoTosa').on("click", function(){
        	$("#agendamentoConsulta").toggleClass("tosaSwitch");
        	$("#afterSwitchTosaBox").toggleClass("tosaSwitch");
        	$("#agendamentoBanho").toggleClass("tosaSwitch");
        	$("#agendamentoTosa").toggleClass("tosaSwitch");
        	$("#tosaForm").toggleClass("tosaSwitch");
        });
});