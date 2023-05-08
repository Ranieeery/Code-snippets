(defun circulo (raio)
  (let ((area (* pi (* raio raio)))
        (perimetro (* 2 pi raio)))
    (list area perimetro)))
 
(print (circulo 5))
