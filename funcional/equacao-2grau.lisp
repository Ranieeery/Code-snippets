;modelo ax² + bx + c

(defun calcular-equacao-2grau (a &optional b c)
  (let* ((delta (- (* b b) (* 4 a c)))
         (x1 nil)
         (x2 nil))
    (cond ((and b c) ; ax² + bx + c
           (if (> delta 0)
               (setf x1 (/ (+ (- b) (sqrt delta)) (* 2 a))
                     x2 (/ (+ (- b) (- (sqrt delta))) (* 2 a)))
             (if (= delta 0)
                 (setf x1 (/ (- (- b)) (* 2 a))))
                 (list x1 x2)))
          ((and b (not c)) ; ax² + bx
           (setf x1 0
                 x2 (/ (- (- b)) (* 2 a))
                 (list x1 x2)))
          ((and c (not b)) ; ax² + c
           (if (> delta 0)
               (setf x1 (/ (+ (sqrt delta)) (* 2 a))
                     x2 (/ (- (sqrt delta)) (* 2 a)))
             (if (= delta 0)
                 (setf x1 (/ (sqrt delta) (* 2 a)))))
          (t ; ax²
           (if (> a 0)
               (setf x1 0
                     x2 (sqrt a)
                     (list x1 x2))
             (if (= a 0)
                 "A equação não é de segundo grau."
               "Insira uma função válida"))))))

(print (calcular-equacao-2grau 3 7 4)) ; ax² + bx + c
(print (calcular-equacao-2grau 2 3)) ; ax² + bx
(print (calcular-equacao-2grau 1 nil 6)) ; ax² + c, nil == null
(print (calcular-equacao-2grau 5)) ; ax²
