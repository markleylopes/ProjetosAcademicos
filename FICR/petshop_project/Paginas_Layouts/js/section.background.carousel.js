$(document).ready(function(){
	$('.owl-carousel').owlCarousel({
    loop:true,
    nav:false,
    autoplay:true,
    autoplayTimeout: 9000,
    responsive:{
        0:{
            items:1
        },
        600:{
            items:1
        },
        1000:{
            items:1
        }
    }
  })
});


$('.customNextBtn').click(function() {
    $('.owl-carousel').trigger('next.owl.carousel');
});
$('.customPrevBtn').click(function() {
    $('.owl-carousel').trigger('prev.owl.carousel', [300]);
});