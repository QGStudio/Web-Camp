mosho.plugin({
  name: "scaleActiveSlide",
  preShow: function (event) {
    prev = event.detail.prevSlide;
    next = event.detail.nextSlide;
    if (prev) { 
      prev.scale(0.25); 
    }
    if (next) { 
      next.scale(4);
    }
  }
});

mosho.init();